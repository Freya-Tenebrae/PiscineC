/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:29:54 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/21 17:24:44 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_skycrapper(int size, char *str);

int		main(int argc, char **argv)
{
	int size;

	if (argc == 1)
		ft_putstr("Error\n");
	else if (argc > 2)
		ft_putstr("Error\n");
	else
	{
		size = (ft_strlen(argv[1]) + 1) / 2 / 4;
		if (size < 1 || size > 9 || ((ft_strlen(argv[1]) + 1) % 2) != 0 ||
			(((ft_strlen(argv[1]) + 1) / 2) % 4) != 0)
			ft_putstr("Error\n");
		else
		{
			ft_skycrapper(size, argv[1]);
		}
	}
	return (0);
}
