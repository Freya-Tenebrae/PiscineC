/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llalba <llalba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:54:00 by llalba            #+#    #+#             */
/*   Updated: 2021/03/31 18:03:18 by llalba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Duplicates map->content into map->tmp but replaces empty characters by 1 and
** obstacles by 0.
*/

void			map_init(t_map *map)
{
	unsigned int	i;

	i = 0;
	while (i < (map->lines) * (map->columns))
	{
		if (map->content[i] == map->obstacle_char)
			map->tmp[i] = 0;
		else
			map->tmp[i] = 1;
		i++;
	}
}

/*
** For each cell, computes the min of the value above, the value on the
** left and the value on the top left, adds 1.
*/

void			map_fill(t_map *map)
{
	unsigned int	i;

	i = 0;
	while (i < (map->lines) * (map->columns))
	{
		if (i >= map->columns && i % map->columns != 0 && map->tmp[i])
		{
			map->tmp[i] = 1 + get_min_3(
				map->tmp[i - 1],
				map->tmp[i - (map->columns)],
				map->tmp[i - (map->columns) - 1]);
		}
		i++;
	}
}

/*
** Finds the corner at the bottom right of the biggest square of map->content,
** colors this square.
*/

void			replace_by_full_char(t_map *map, unsigned int max_index)
{
	unsigned int	i;
	unsigned int	top_left;
	unsigned int	side_len;

	side_len = map->tmp[max_index];
	top_left = max_index - (map->columns * (side_len - 1)) - (side_len - 1);
	while (top_left <= max_index)
	{
		i = top_left;
		if (map->columns == 1)
			map->content[i] = map->full_char;
		while (map->columns != 1 && i < map->columns + top_left &&
			(i % map->columns) <= (max_index % map->columns) &&
				(i % map->columns) >= (top_left % map->columns))
		{
			map->content[i] = map->full_char;
			i++;
		}
		top_left += (map->columns);
	}
	free(map->tmp);
}

/*
** Very hearth of the programme. Find the corner at the bottom right of the
** biggest square that we're looking for, colors the corresponding square.
*/

void			ft_solve(t_map *map)
{
	unsigned int	i;
	unsigned int	max_index;

	i = 1;
	max_index = 0;
	map_init(map);
	map_fill(map);
	while (i < (map->lines) * (map->columns))
	{
		if ((map->tmp[i]) > (map->tmp[max_index]))
			max_index = i;
		i++;
	}
	if (map->tmp[max_index] != 0)
		replace_by_full_char(map, max_index);
}
