/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:06:00 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/26 15:06:45 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
int		ft_checkerror(char *base);
int		ft_is_in_base(char c, char *base);

int		ft_lstrnbr(int nbr, int base_lenght)
{
	int x;
	int power_base;

	if (nbr == 0)
		return (1);
	x = 1;
	power_base = 1;
	while (x <= nbr)
	{
		x = x * base_lenght;
		power_base++;
	}
	return (power_base - 1);
}

char	*ft_addchar(char *dest, char src)
{
	unsigned int i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest[i++] = src;
	dest[i] = '\0';
	return (dest);
}

void	ft_putnbr_base_instr(int nbr, int nbase, char *number_base, char *base)
{
	if (nbr >= nbase)
	{
		ft_putnbr_base_instr((nbr / nbase), nbase, number_base, base);
	}
	ft_addchar(number_base, base[nbr % nbase]);
}

char	*ft_put_nbr(int nbr, char *base, int sign)
{
	int		nbase;
	int		power_base;
	char	*number_base;
	int		i;

	nbase = ft_strlen(base);
	power_base = ft_lstrnbr(nbr, nbase);
	i = -1;
	if (sign % 2 != 0 && nbr != 0)
	{
		if (!(number_base = malloc((power_base + 2) * sizeof(char))))
			return (0);
		while (++i < power_base + 2)
			number_base[i] = '\0';
		number_base[0] = '-';
	}
	else
	{
		if (!(number_base = malloc((power_base + 1) * sizeof(char))))
			return (0);
		while (++i < power_base + 1)
			number_base[i] = '\0';
	}
	ft_putnbr_base_instr(nbr, nbase, number_base, base);
	return (number_base);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int i;
	int j;
	int value;
	int sign;

	i = 0;
	value = 0;
	sign = 0;
	if (ft_checkerror(base_from) != 0 || ft_checkerror(base_to))
		return (0);
	while (nbr[i] != '\0' && (nbr[i] == ' ' || nbr[i] == '\f' ||
		nbr[i] == '\n' || nbr[i] == '\t' || nbr[i] == '\v'))
		i++;
	while (nbr[i] != '\0' && (nbr[i] == '+' || nbr[i] == '-'))
		if (nbr[i++] == '-')
			sign++;
	while (nbr[i] != '\0' && ft_is_in_base(nbr[i], base_from) == 0)
	{
		j = 0;
		while (base_from[j] != '\0')
			if (base_from[j++] == nbr[i])
				value = value * ft_strlen(base_from) + j - 1;
		i++;
	}
	return (ft_put_nbr(value, base_to, sign));
}
