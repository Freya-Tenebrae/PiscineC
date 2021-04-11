/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:29:46 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/24 17:39:27 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_recursive_power.c"

int	main()
{
	printf("5^3 - %i\n", ft_recursive_power(5,3));
	printf("0^0 - %i\n", ft_recursive_power(0,0));
	printf("0^1 - %i\n", ft_recursive_power(0,1));
	printf("1^0 - %i\n", ft_recursive_power(1,0));
	printf("2^8 - %i\n", ft_recursive_power(2,8));
	printf("-2^3 - %i\n", ft_recursive_power(-2,3));
	printf("2^-4 - %i\n", ft_recursive_power(2,-4));
}
