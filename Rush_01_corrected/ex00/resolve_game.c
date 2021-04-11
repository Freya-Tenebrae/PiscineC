/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:30:15 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/21 17:14:31 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_validity(int size, int *game_map, int *game_constraints, int pos);
void	ft_print_game(int size, int *game);

int		ft_unique_number_on_line(int size, int *game_map, int value, int j)
{
	int x;
	int n_time_present;

	x = 0;
	n_time_present = 0;
	while (x + size * j < size * (j + 1))
		if (game_map[x++ + size * j] == value)
			n_time_present++;
	if (n_time_present != 1)
		return (1);
	return (0);
}

int		ft_unique_number_on_colunm(int size, int *game_map, int value, int i)
{
	int y;
	int n_time_present;

	y = 0;
	n_time_present = 0;
	while (y * size + i < size * size + i)
		if (game_map[y++ * size + i] == value)
			n_time_present++;
	if (n_time_present != 1)
		return (1);
	return (0);
}

int		ft_resolve(int size, int *game_constraints, int *game_map, int pos)
{
	int nbr;

	if (pos == size * size)
		return (0);
	nbr = 0;
	while (++nbr <= size)
	{
		game_map[pos] = nbr;
		if ((ft_unique_number_on_line(size, game_map, nbr, (pos / size))
																== 0) &&
			(ft_unique_number_on_colunm(size, game_map, nbr, (pos % size))
																== 0) &&
			(ft_validity(size, game_map, game_constraints, pos) == 0))
		{
			if (ft_resolve(size, game_constraints, game_map, pos + 1) == 0)
				return (0);
			game_map[pos] = 0;
		}
	}
	game_map[pos] = 0;
	return (1);
}

int		ft_resolve_game(int size, int *game_constraints, int *game_map)
{
	if (ft_resolve(size, game_constraints, game_map, 0) == 0)
	{
		ft_print_game(size, game_map);
		return (0);
	}
	else
		return (1);
}
