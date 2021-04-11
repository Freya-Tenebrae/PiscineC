/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:00:15 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/26 08:39:09 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	i = -1;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!(tab = malloc((max - min) * sizeof(int))))
		return (-1);
	while (++i <= (max - min - 1))
		tab[i] = min + i;
	*range = tab;
	return (max - min);
}
