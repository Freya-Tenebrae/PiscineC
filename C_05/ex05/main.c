/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 17:52:14 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/24 09:57:23 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_sqrt.c"

int	main()
{
	printf("81 - %i\n", ft_sqrt(81));
	printf("9 - %i\n", ft_sqrt(9));
	printf("1 - %i\n", ft_sqrt(1));
	printf("0 - %i\n", ft_sqrt(0));
	printf("-4 - %i\n", ft_sqrt(-4));
	printf("125 - %i\n", ft_sqrt(125));
	printf("1461 - %i\n", ft_sqrt(1461));
	printf("111 - %i\n", ft_sqrt(111));
}
