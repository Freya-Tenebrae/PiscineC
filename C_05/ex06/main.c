/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 17:52:14 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/24 12:58:27 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_is_prime.c"

int	main()
{
	printf("83 - %i\n", ft_is_prime(83));
	printf("0 - %i\n", ft_is_prime(0));
	printf("1 - %i\n", ft_is_prime(1));
	printf("84 - %i\n", ft_is_prime(84));
	printf("11 - %i\n", ft_is_prime(11));
	printf("7 - %i\n", ft_is_prime(7));
	printf("414109 - %i\n", ft_is_prime(414109));
	printf("414110 - %i\n", ft_is_prime(414110));
	printf("2147483647 - %i\n", ft_is_prime(2147483647));
}
