/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:58:00 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/25 10:39:01 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		str_l;
	int		i;
	char	*res;

	str_l = ft_strlen(src) + 1;
	i = -1;
	if (!(res = malloc(str_l * sizeof(char))))
		return (0);
	while (++i < str_l)
		res[i] = src[i];
	return (res);
}
