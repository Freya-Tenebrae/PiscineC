/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:18:41 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/20 14:56:25 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_checkerror_and_skip_space(char *str, char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (-1);
	while (base[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
			if (base[i] == base[j++] && i != j - 1)
				return (-2);
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (-3);
		i++;
	}
	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\f' ||
		str[i] == '\n' || str[i] == '\t' || str[i] == '\v'))
		i++;
	return (i);
}

int		ft_is_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
		if (base[i++] == c)
			return (0);
	return (1);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int j;
	int value;
	int sign;

	i = ft_checkerror_and_skip_space(str, base);
	if (i < 0)
		return (0);
	value = 0;
	sign = 0;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
		if (str[i++] == '-')
			sign++;
	while (str[i] != '\0' && ft_is_in_base(str[i], base) == 0)
	{
		j = 0;
		while (base[j] != '\0')
			if (base[j++] == str[i])
				value = value * ft_strlen(base) + j - 1;
		i++;
	}
	if ((sign % 2) != 0)
		value = value * -1;
	return (value);
}
