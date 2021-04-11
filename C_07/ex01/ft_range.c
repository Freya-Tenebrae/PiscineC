/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:00:15 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/25 08:03:37 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = -1;
	if (min >= max)
		return (0);
	if (!(tab = malloc((max - min) * sizeof(int))))
		return (0);
	while (++i <= (max - min - 1))
		tab[i] = min + i;
	return (tab);
}
