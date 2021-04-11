/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llalba <llalba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:32:06 by llalba            #+#    #+#             */
/*   Updated: 2021/03/31 22:40:57 by llalba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Calculates how big [map->content] should be to contain all data of the given
** file. Returns 0 if any issue occurs.
*/

int				calc_malloc_size(char *file)
{
	int				error;
	unsigned int	malloc_size;
	int				fd;
	int				ret;
	unsigned char	buf[BUF_SIZE + 1];

	error = 0;
	malloc_size = 0;
	ret = 1;
	if ((fd = open(file, O_RDONLY)) == -1)
		error = 1;
	while (!error && ret && malloc_size < MAX_FILE_SIZE)
	{
		if ((ret = read(fd, buf, BUF_SIZE)) == -1)
			error = 1;
		if (!error)
		{
			buf[ret] = '\0';
			count_map_char(&malloc_size, buf);
		}
	}
	if (close(fd) == -1 || malloc_size >= MAX_FILE_SIZE || malloc_size < 2)
		error = 1;
	return (error ? 0 : malloc_size);
}

/*
** Fills in map->lines, map->columns, map->empty_char, map->obstacle_char,
** map->full_char. Returns 0 if everything runs smoothly.
*/

int				add_info(t_map *map, char *file)
{
	int				error;
	int				eol_pos;
	unsigned char	line1[10];
	int				fd;

	error = 0;
	eol_pos = 4;
	line1[9] = '\0';
	if ((fd = open(file, O_RDONLY)) == -1)
		error = 1;
	if (!error && read(fd, line1, 9) < 7)
		error = 1;
	while (!error && eol_pos <= 9 && line1[eol_pos] != '\n')
		eol_pos++;
	if (!error && eol_pos == 10)
		error = 1;
	if (!error)
	{
		map->full_char = line1[eol_pos - 1];
		map->obstacle_char = line1[eol_pos - 2];
		map->empty_char = line1[eol_pos - 3];
		map->lines = custom_atoi(line1, (eol_pos - 3));
	}
	return (close(fd) == -1 || error || (map->lines) == 0);
}

/*
** Fills in [map->content with the content of the file provided (after the 1st
** line of the file). Returns 0 when things go well.
*/

int				fill_in(t_map *map, char *file)
{
	int				error;
	int				ret;
	int				fd;
	int				map_pos;
	unsigned char	buf[BUF_SIZE + 1];

	error = 0;
	ret = 1;
	map_pos = 0;
	if ((fd = open(file, O_RDONLY)) == -1)
		error = 1;
	while (!error && buf[0] != '\n')
		if (read(fd, buf, 1) == -1)
			error = 1;
	while (!error && ret)
	{
		ret = read(fd, buf, BUF_SIZE);
		error = ((ret == -1) ? 1 : error);
		if (error)
			break ;
		buf[ret] = '\0';
		if (load_content(map, buf, &map_pos) == 0)
			error = 1;
	}
	return (close(fd) == -1 || error);
}

/*
** Deallocates map->content and set map->lines to 0, which will indicate that
** something went wrong.
*/

int				free_and_exit(t_map *map)
{
	free(map->content);
	free(map->tmp);
	map->lines = 0;
	return (0);
}

/*
** Loads the file content into *map and calls the above functions.
** Returns 1 if everything's OK, else 0.
*/

int				load_from_file(char *file, t_map *map)
{
	unsigned int	malloc_size;

	malloc_size = calc_malloc_size(file);
	if (!(map->content = malloc(malloc_size * sizeof(unsigned char))))
		return (0);
	if (!(map->tmp = malloc((malloc_size - 1) * sizeof(unsigned int))))
	{
		free(map->content);
		return (0);
	}
	if (malloc_size == 0)
		return (free_and_exit(map));
	map->content[malloc_size - 1] = '\0';
	if (add_info(map, file) != 0)
		return (free_and_exit(map));
	if (check_char(map))
		return (free_and_exit(map));
	map->columns = (malloc_size - 1) / map->lines;
	if (map->lines * map->columns != (malloc_size - 1))
		return (free_and_exit(map));
	if (fill_in(map, file) != 0)
		return (free_and_exit(map));
	return (1);
}
