/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llalba <llalba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:00:15 by llalba            #+#    #+#             */
/*   Updated: 2021/04/01 11:07:04 by llalba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_strlen(unsigned char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_char(t_map *map)
{
	if (map->full_char < 32 || map->full_char == 127)
		return (1);
	if (map->obstacle_char < 32 || map->obstacle_char == 127)
		return (1);
	if (map->empty_char < 32 || map->empty_char == 127)
		return (1);
	if (map->empty_char == map->obstacle_char ||
			map->empty_char == map->full_char ||
			map->obstacle_char == map->full_char)
		return (1);
	return (0);
}

int		custom_atoi(unsigned char *str, int len)
{
	int output;
	int i;

	output = 0;
	i = 0;
	while (i < len)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		output = 10 * output + (str[i] - 48);
		i++;
	}
	return (output);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
