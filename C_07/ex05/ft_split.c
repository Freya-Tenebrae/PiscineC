/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:27:03 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/29 10:38:26 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		nb_words(char *str, char *sep)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], sep))
			i++;
		if (str[i] && !is_sep(str[i], sep))
			count++;
		while (str[i] && !is_sep(str[i], sep))
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *sep)
{
	char	**strs;
	int		len;
	int		i;
	int		j;

	len = nb_words(str, sep);
	if (!(strs = (char **)malloc(sizeof(char *) * (len + 1))))
		return (0);
	i = 0;
	while (i < len)
	{
		while (*str && is_sep(*str, sep))
			str++;
		j = 0;
		while (str[j] && !is_sep(str[j], sep))
			j++;
		if (!(strs[i] = (char *)malloc(j + 1)))
			return (0);
		j = 0;
		while (*str && !is_sep(*str, sep))
			strs[i][j++] = *str++;
		strs[i++][j] = 0;
	}
	strs[i] = 0;
	return (strs);
}
