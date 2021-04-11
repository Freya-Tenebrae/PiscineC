/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:06:00 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/26 08:43:02 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' ||
			base[i] == '\f' || base[i] == '\n' || base[i] == '\t' ||
			base[i] == '\v')
			return (3);
		i++;
	}
	return (0);
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
