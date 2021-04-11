/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:18:41 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/20 13:55:08 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int i;
	int value;
	int sign;

	i = 0;
	value = 0;
	sign = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\f' ||
		str[i] == '\n' || str[i] == '\t' || str[i] == '\v'))
		i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
		if (str[i++] == '-')
			sign++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		value = value * 10 + (str[i++] - '0');
	if ((sign % 2) != 0)
		value = value * -1;
	return (value);
}
