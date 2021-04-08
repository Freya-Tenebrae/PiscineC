/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:22:08 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/13 17:12:50 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_formating(int n1, int n2, int n3)
{
	if (n1 != '7' || n2 != '8' || n3 != '9')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char number1;
	char number2;
	char number3;

	number1 = '0';
	while (number1 <= '7')
	{
		number2 = number1 + 1;
		while (number2 <= '8')
		{
			number3 = number2 + 1;
			while (number3 <= '9')
			{
				write(1, &number1, 1);
				write(1, &number2, 1);
				write(1, &number3, 1);
				ft_put_formating(number1, number2, number3);
				number3++;
			}
			number2++;
		}
		number1++;
	}
}
