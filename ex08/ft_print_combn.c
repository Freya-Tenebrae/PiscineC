/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:31:00 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/14 16:25:54 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_put_power(int original_n)
{
	int x;
	int result;

	x = original_n - 1;
	result = 1;
	while (x != 0)
	{
		result = result * 10;
		x--;
	}
	return (result);
}

void	ft_putnbr(int nb, int x, int original_n)
{
	char number;

	if (x == 1 && nb < ft_put_power(original_n) && nb != 0)
	{
		write(1, "0", 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10, 0, original_n);
	}
	number = ('0' + (nb % 10));
	write(1, &number, 1);
}

void	ft_put_formatting(int nb, int original_n)
{
	int is_last_number;

	is_last_number = 0;
	if ((nb == 9 && original_n == 1) ||
		(nb == 89 && original_n == 2) ||
		(nb == 789 && original_n == 3) ||
		(nb == 6789 && original_n == 4) ||
		(nb == 56789 && original_n == 5) ||
		(nb == 456789 && original_n == 6) ||
		(nb == 3456789 && original_n == 7) ||
		(nb == 23456789 && original_n == 8) ||
		(nb == 123456789 && original_n == 9))
		is_last_number = 1;
	if (is_last_number == 0)
		write(1, ", ", 2);
}

void	ft_int_to_print(int x, int y, int n, int original_n)
{
	int tmp_x;
	int tmp_y;

	tmp_y = 0 + y;
	x = x * 10;
	while (tmp_y < 10)
	{
		tmp_x = x + tmp_y++;
		if (n > 1)
			ft_int_to_print(tmp_x, tmp_y, n - 1, original_n);
		else if (n == 1)
		{
			ft_putnbr(tmp_x, 1, original_n);
			ft_put_formatting(tmp_x, original_n);
		}
	}
}

void	ft_print_combn(int n)
{
	if (0 < n && n < 10)
		ft_int_to_print(0, 0, n, n);
}
