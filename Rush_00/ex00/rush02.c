/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:58:12 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/14 10:52:01 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_select_and_putchar(int act_x, int x, int act_y, int y)
{
	if ((act_y == 0 && act_x == 0) || (act_y == 0 && act_x == x))
	{
		ft_putchar('A');
	}
	else if ((act_y == y && act_x == 0) || (act_y == y && act_x == x))
	{
		ft_putchar('C');
	}
	else if (act_x == 0 || act_x == x || act_y == 0 || act_y == y)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int act_x;
	int act_y;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	act_y = 0;
	while (act_y < y)
	{
		act_x = 0;
		while (act_x < x)
		{
			ft_select_and_putchar(act_x, x - 1, act_y, y - 1);
			act_x++;
		}
		ft_putchar('\n');
		act_y++;
	}
}
