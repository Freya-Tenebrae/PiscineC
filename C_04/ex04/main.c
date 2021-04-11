/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 16:38:23 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/19 15:19:24 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	ft_putnbr_base(int nbr, char *base);
void	ft_putchar(char c);

int		main()
{
	int nbr = 42;
	char b1[] = "01";
	char b2[] = "0123456789";
	char b3[] = "0123456789ABCDEF";
	char b4[] = "poneyvif";
	char b5[] = "";
	char b6[] = "00";
	char b7[] = "012345+678";

	ft_putnbr_base(nbr, b1);
	ft_putchar('\n');
	ft_putnbr_base(nbr, b2);
	ft_putchar('\n');
	ft_putnbr_base(nbr, b3);
	ft_putchar('\n');
	ft_putnbr_base(nbr, b4);
	ft_putchar('\n');
	ft_putnbr_base(nbr, b5);
	ft_putchar('\n');
	ft_putnbr_base(nbr, b6);
	ft_putchar('\n');
	ft_putnbr_base(nbr, b7);
	ft_putchar('\n');
}
