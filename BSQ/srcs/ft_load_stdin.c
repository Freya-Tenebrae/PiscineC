/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_stdin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llalba <llalba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:32:06 by llalba            #+#    #+#             */
/*   Updated: 2021/04/01 11:34:50 by llalba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Loads the standard input into a linked list. Returns 0 if any error occurs.
*/

t_buf			*dump_stdin(unsigned int *malloc_size)
{
	int				error;
	int				ret;
	t_buf			*head;
	unsigned char	buf[BUF_SIZE + 1];

	ret = 1;
	error = 0;
	head = buf_list_init();
	while (!error && ret && *malloc_size < MAX_FILE_SIZE)
	{
		ret = read(0, buf, BUF_SIZE);
		if (ret == 0)
			break ;
		if (!error)
		{
			buf[ret] = '\0';
			if (!(head = add_new(head, buf)))
				error = 1;
			else
				count_map_char(malloc_size, head->str);
		}
	}
	if (*malloc_size >= MAX_FILE_SIZE || *malloc_size < 2)
		error = 1;
	return (error ? 0 : head);
}

/*
** Fills in map->lines, map->columns, map->empty_char, map->obstacle_char,
** map->full_char, based on stdin. Returns 0 if everything runs smoothly.
*/

int				add_info_stdin(t_map *map, t_buf *head)
{
	int				error;
	int				eol_pos;

	error = 0;
	eol_pos = 4;
	if (ft_strlen(head->str) < 7)
		error = 1;
	while (!error && eol_pos <= 9 && head->str[eol_pos] != '\n')
		eol_pos++;
	if (!error && eol_pos == 10)
		error = 1;
	if (!error)
	{
		map->full_char = head->str[eol_pos - 1];
		map->obstacle_char = head->str[eol_pos - 2];
		map->empty_char = head->str[eol_pos - 3];
		map->lines = custom_atoi(head->str, (eol_pos - 3));
	}
	return (error || (map->lines) == 0);
}

/*
** Fills in map->content with the content of standard input (after the 1st
** line). Returns 0 when things go well.
*/

int				fill_in_stdin(t_map *map, t_buf *head)
{
	int				error;
	int				map_pos;

	error = 0;
	map_pos = 0;
	while (*(head->str) && *(head->str) != '\n')
		(head->str)++;
	if (*(head->str))
		(head->str)++;
	while (!error && head->next)
	{
		if (load_content(map, head->str, &map_pos) == 0)
			error = 1;
		head = head->next;
	}
	return (error);
}

/*
** Loads the standard input into *map and calls the above functions.
** We'll need a temporary linked list to avoid allocating a huge memory chunck
** for nothing. Indeed, we cannot know in advance how long the stdin will be.
** Returns 1 if everything's OK, else 0.
*/

int				load_from_stdin(t_map *map)
{
	unsigned int	malloc_size;
	t_buf			*head;

	malloc_size = 0;
	if (!(head = dump_stdin(&malloc_size)))
		return (0);
	if (malloc_size == 0 ||
			!(map->content = malloc(malloc_size * sizeof(unsigned char))))
		return (free_stdin_buf(head));
	if (!(map->tmp = malloc((malloc_size - 1) * sizeof(unsigned int))))
	{
		free(map->content);
		return (free_stdin_buf(head));
	}
	map->content[malloc_size - 1] = '\0';
	if (add_info_stdin(map, head) != 0)
		return (free_stdin_buf(head) || free_and_exit(map));
	if (check_char(map))
		return (free_stdin_buf(head) || free_and_exit(map));
	map->columns = (malloc_size - 1) / map->lines;
	if (map->lines * map->columns != (malloc_size - 1))
		return (free_stdin_buf(head) || free_and_exit(map));
	if (fill_in_stdin(map, head) != 0)
		return (free_stdin_buf(head) || free_and_exit(map));
	return (free_stdin_buf(head) + 1);
}
