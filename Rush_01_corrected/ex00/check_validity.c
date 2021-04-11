/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_validity.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 08:53:21 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/21 17:08:01 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_rev_int_tab(int *tab, int size);

int	ft_nbr_visible_box(int size, int *line_or_colunm, int is_reversed)
{
	int i;
	int j;
	int result;
	int test;

	if (is_reversed == 1)
		ft_rev_int_tab(line_or_colunm, size);
	i = 1;
	result = 1;
	while (i < size)
	{
		j = 0;
		test = 0;
		while (j < i)
			if (line_or_colunm[j++] > line_or_colunm[i])
				test = 1;
		if (test == 0)
			result++;
		i++;
	}
	return (result);
}

int	ft_is_line_valid(int size, int *game_map, int *game_constraints, int j)
{
	int x;
	int *actual_line;
	int actual_line_left;
	int actual_line_right;

	x = 0;
	if (!(actual_line = malloc(size * 4)))
		return (1);
	while (x + size * j < size * (j + 1))
	{
		if (game_map[x + size * j] == 0)
			return (0);
		actual_line[x] = game_map[x + size * j];
		x++;
	}
	actual_line_left = ft_nbr_visible_box(size, actual_line, 0);
	actual_line_right = ft_nbr_visible_box(size, actual_line, 1);
	if (actual_line_left != game_constraints[j + size * 2])
	{
		return (1);
	}
	if (actual_line_right != game_constraints[j + size * 3])
	{
		return (1);
	}
	return (0);
}

int	ft_is_colunm_valid(int size, int *game_map, int *game_constraints, int i)
{
	int y;
	int *actual_colunm;
	int actual_number_up;
	int actual_number_down;

	y = 0;
	if (!(actual_colunm = malloc(size * sizeof(int))))
		return (1);
	while (y * size + i < size * size + i)
	{
		if (game_map[y * size + i] == 0)
			return (0);
		actual_colunm[y] = game_map[y * size + i];
		y++;
	}
	actual_number_up = ft_nbr_visible_box(size, actual_colunm, 0);
	actual_number_down = ft_nbr_visible_box(size, actual_colunm, 1);
	if (actual_number_up != game_constraints[i])
	{
		return (1);
	}
	if (actual_number_down != game_constraints[i + size])
	{
		return (1);
	}
	return (0);
}

int	ft_validity(int size, int *game_map, int *game_constraints, int pos)
{
	int i;
	int j;

	i = pos % size;
	j = pos / size;
	if (ft_is_line_valid(size, game_map, game_constraints, j) != 0)
		return (1);
	if (ft_is_colunm_valid(size, game_map, game_constraints, i) != 0)
		return (1);
	return (0);
}
