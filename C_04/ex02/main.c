/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 16:38:23 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/18 13:01:57 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	ft_putnbr(int nb);
void	ft_putchar(char c);

int		main()
{
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(54127);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
}
