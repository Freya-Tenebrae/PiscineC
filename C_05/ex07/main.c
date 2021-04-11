/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 17:52:14 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/24 12:57:36 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_find_next_prime.c"

int	main()
{
	printf("83 - %i\n", ft_find_next_prime(83));
	printf("0 - %i\n", ft_find_next_prime(0));
	printf("1 - %i\n", ft_find_next_prime(1));
	printf("84 - %i\n", ft_find_next_prime(84));
	printf("111 - %i\n", ft_find_next_prime(111));
	printf("148 - %i\n", ft_find_next_prime(148));
	printf("414109 - %i\n", ft_find_next_prime(414109));
	printf("414110 - %i\n", ft_find_next_prime(414110));
	printf("2147483647 - %i\n", ft_find_next_prime(2147483647));
	printf("2147483424 - %i\n", ft_find_next_prime(2147483424));
}
