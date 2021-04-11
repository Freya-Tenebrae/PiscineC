/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sep_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduaka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 11:31:09 by maduaka           #+#    #+#             */
/*   Updated: 2021/03/28 17:35:26 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_config.h"

int		ft_countlines(char *str)
{
	int i;
	int count;

	i = -1;
	count = 0;
	while (str[++i])
		if (str[i] == '\n' && (i == 0 || str[i - 1] != '\n'))
			count++;
	return (count);
}

char	**ft_sep_dict(char *dict)
{
	int		i;
	int		j;
	int		lineplace;
	char	**tabintab;

	i = 0;
	j = i;
	lineplace = j;
	if (!(tabintab = malloc(sizeof(char) * 2)))
		return (0);
	(void)dict;
	return (0);
	return (tabintab);
}
