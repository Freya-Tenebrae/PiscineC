/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llalba <llalba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 14:39:42 by llalba            #+#    #+#             */
/*   Updated: 2021/04/01 11:30:11 by llalba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_map(t_map *map)
{
	unsigned int position;

	position = 0;
	ft_solve(map);
	while (position < (map->lines) * (map->columns))
	{
		write(1, (map->content + position), map->columns);
		position += (map->columns);
		ft_putchar('\n');
	}
	free(map->content);
}
