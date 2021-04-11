/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 12:09:00 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/30 12:10:13 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		str_l;
	int		i;
	char	*res;

	str_l = ft_strlen(src) + 1;
	i = -1;
	if (!(res = malloc((str_l) * sizeof(char))))
		return (0);
	while (++i < str_l)
		res[i] = src[i];
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*st;
	int					x;

	if (!(st = malloc((ac + 1) * (sizeof(struct s_stock_str)))))
		return (0);
	x = -1;
	while (++x < ac)
	{
		st[x].size = ft_strlen(av[x]);
		st[x].str = av[x];
		st[x].copy = ft_strdup(av[x]);
	}
	st[x].str = 0;
	return (st);
}
