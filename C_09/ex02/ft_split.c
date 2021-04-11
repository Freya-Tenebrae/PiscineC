/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:27:03 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/30 17:27:43 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_sep(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i] != '\0')
		if (charset[i] == c)
			return (1);
	return (0);
}

int		ft_nb_string(char *str, char *charset)
{
	int number;
	int i;

	number = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_is_sep(str[i], charset) == 1)
			i++;
		if (str[i] != '\0' && ft_is_sep(str[i], charset) == 0)
			number++;
		while (str[i] != '\0' && ft_is_sep(str[i], charset) == 0)
			i++;
	}
	return (number);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		strs_l;
	int		i;
	int		j;

	strs_l = ft_nb_string(str, charset);
	if (!(strs = (char **)malloc((strs_l + 1) * sizeof(char *))))
		return (0);
	i = 0;
	while (i < strs_l)
	{
		while (*str != '\0' && ft_is_sep(*str, charset) == 1)
			str++;
		j = 0;
		while (str[j] != '\0' && ft_is_sep(str[j], charset) == 0)
			j++;
		if (!(strs[i] = (char *)malloc(j + 1)))
			return (0);
		j = 0;
		while (*str != '\0' && ft_is_sep(*str, charset) == 0)
			strs[i][j++] = *str++;
		strs[i++][j] = 0;
	}
	strs[i] = 0;
	return (strs);
}
