/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llalba <llalba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 15:05:05 by llalba            #+#    #+#             */
/*   Updated: 2021/04/01 11:06:34 by llalba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	t_map			map;
	int				i;

	if (argc > 1)
	{
		i = 1;
		while (--argc)
		{
			if (!load_from_file(argv[i], &map) || map.lines == 0)
				write(2, "map error\n", 10);
			else
				print_map(&map);
			i++;
		}
	}
	else
	{
		if (!load_from_stdin(&map) || map.lines == 0)
			write(2, "map error\n", 10);
		else
			print_map(&map);
	}
	return (0);
}
