/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:30:24 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/13 17:15:04 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb, int x)
{
	if (x == 1 && nb < 10)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10, 0);
	ft_putchar(('0' + (nb % 10)));
}

void	ft_put_formatting(int nb1, int nb2)
{
	if (nb1 != 98 || nb2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int number1;
	int number2;

	number1 = 0;
	while (number1 <= 99)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			ft_putnbr(number1, 1);
			ft_putchar(' ');
			ft_putnbr(number2, 1);
			ft_put_formatting(number1, number2);
			number2++;
		}
		number1++;
	}
}
