/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:58:00 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/26 08:45:33 by cmaginot         ###   ########.fr       */
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

int		ft_resultlen(int size, char **strs, char *sep)
{
	int sep_l;
	int i;
	int total_size;

	i = -1;
	sep_l = ft_strlen(sep);
	if (size == 0)
		total_size = 1;
	else
	{
		total_size = sep_l * (size - 1) + 1;
		while (++i < size)
			total_size = total_size + ft_strlen(strs[i]);
	}
	return (total_size);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		total_size;

	total_size = ft_resultlen(size, strs, sep);
	if (!(result = malloc(total_size * sizeof(char))))
		return (0);
	i = -1;
	result[0] = '\0';
	while (++i < size && total_size > 1)
	{
		ft_strcat(result, strs[i]);
		if (i != size - 1)
			ft_strcat(result, sep);
	}
	return (result);
}
