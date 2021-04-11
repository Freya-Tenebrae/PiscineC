/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_group.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduaka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 10:57:40 by maduaka           #+#    #+#             */
/*   Updated: 2021/03/27 17:00:23 by maduaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_config.h"

void	ft_putinside(char **returntab, char *str, int len)
{
	int i;

	i = (3 - (len % 3)) % 3;
	while (i < (len + ((3 - (len % 3)) % 3)))
	{
		returntab[i / 3][i % 3] = str[i - ((3 - (len % 3)) % 3)];
		i++;
	}
	returntab[i / 3][0] = 'E';
	returntab[i / 3][1] = 'N';
	returntab[i / 3][2] = 'D';
}

char	**ft_group(char *str)
{
	int		len;
	int		i;
	int		j;
	char	**returntab;

	len = 0;
	while (str[len])
		len++;
	if (!(returntab = malloc(((len + 2) / 3 + 1) * sizeof(char*))))
		return (NULL);
	i = -1;
	while (++i < ((len + 2) / 3 + 1))
	{
		if (!(returntab[i] = malloc(sizeof(char) * 4)))
			return (NULL);
		j = -1;
		while (++j < 3)
			returntab[i][j] = '0';
		returntab[i][3] = 0;
	}
	ft_putinside(returntab, str, len);
	return (returntab);
}
