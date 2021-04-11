/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llalba <llalba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:31:38 by llalba            #+#    #+#             */
/*   Updated: 2021/04/01 11:37:11 by llalba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Count the total number of characters in the file which are not a new line.
** The output will be used to allocate a memory block for [map->content].
*/

void			count_map_char(unsigned int *size, unsigned char *buf)
{
	while (*buf)
	{
		if (*size == 0 && *buf == '\n')
			(*size) = 1;
		if (*size >= 1 && *buf != '\n')
			(*size)++;
		buf++;
	}
}

/*
** Copies every element of *buf to the right place, *map_p, in map->content.
** Returns 0 if an inconsistency is found.
*/

int				load_content(t_map *map, unsigned char *buf, int *map_p)
{
	unsigned int			i;
	static unsigned int		eol_expected = 0;

	i = 0;
	eol_expected = ((*map_p) ? eol_expected : 0);
	while (buf[i] && ((unsigned int)(*map_p)) <= (map->lines) * (map->columns))
	{
		if (!eol_expected &&
			(buf[i] == map->empty_char || buf[i] == map->obstacle_char))
		{
			map->content[*map_p] = buf[i];
			(*map_p)++;
			if ((*map_p) % map->columns == 0)
				eol_expected = 1;
		}
		else if (buf[i] == '\n' && eol_expected)
			eol_expected = 0;
		else
			return (0);
		i++;
	}
	if (buf[i])
		if (buf[i] != '\n' || (buf[i] == '\n' && buf[i + 1]))
			return (0);
	return (1);
}

/*
** Calculates and returns the min value between the value above, the value on
** the left and the value on the top left of a given cell.
*/

unsigned int	get_min_3(unsigned int a, unsigned int b, unsigned int c)
{
	if (a < b)
	{
		if (a < c)
			return (a);
		else
			return (c);
	}
	else
	{
		if (b < c)
			return (b);
		else
			return (c);
	}
}
