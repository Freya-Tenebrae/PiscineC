/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:45:49 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/20 13:06:10 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_checkerror(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (1);
	while (base[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
			if (base[i] == base[j++] && i != j - 1)
				return (2);
		if (base[i] == '+' || base[i] == '-')
			return (3);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nb, char *base)
{
	int			nbase;
	long int	nbr;

	nbr = nb;
	nbase = ft_strlen(base);
	if (ft_checkerror(base) != 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr <= -1 * nbase)
			ft_putnbr_base(((nbr / nbase) * -1), base);
		ft_putchar(base[((nbr * -1) % nbase)]);
	}
	else
	{
		if (nbr >= nbase)
			ft_putnbr_base((nbr / nbase), base);
		ft_putchar(base[(nbr % nbase)]);
	}
}
