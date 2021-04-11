/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skycrapper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:30:22 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/28 12:29:34 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char *str);
int		ft_resolve_game(int size, int *game_constraints, int *game_map);

int		ft_check_arg_is_correct(int size, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (str[i] < '1' || str[i] > (size + '0'))
				return (1);
		}
		else
		{
			if (str[i] != ' ')
				return (2);
		}
		i++;
	}
	return (0);
}

int		*ft_putinform(int size, char *str)
{
	int *table;
	int i;

	table = malloc(size * 4 * 4);
	i = 0;
	while (i < (size * 4))
	{
		table[i] = str[i * 2] - '0';
		i++;
	}
	return (table);
}

int		*ft_init_game_map(int size)
{
	int *table;
	int i;

	table = malloc(size * size * 4);
	i = 0;
	while (i < (size * size))
	{
		table[i] = 0;
		i++;
	}
	return (table);
}

void	ft_skycrapper(int size, char *str)
{
	int *game_constraints;
	int *game_map;

	if (ft_check_arg_is_correct(size, str) != 0)
		ft_putstr("Error\n");
	else
	{
		game_constraints = ft_putinform(size, str);
		game_map = ft_init_game_map(size);
		if (ft_resolve_game(size, game_constraints, game_map) != 0)
			ft_putstr("Error\n");
	}
}
