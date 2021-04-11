/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:50:45 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/25 07:46:42 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ultimate_range.c"

int	main()
{
	int *tab;
	int size;
	int i;
	
	size = ft_ultimate_range(&tab, -45, 25);
	printf("%i\n", size);
	i = 0;
	while (i++ < size)
		printf("%i\n", tab[i-1]);
}
