/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:29:46 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/24 09:45:33 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_recursive_factorial.c"

int	main()
{
	printf("9 - %i\n", ft_recursive_factorial(9));
	printf("12 - %i\n", ft_recursive_factorial(12));
	printf("-4 - %i\n", ft_recursive_factorial(-4));
	printf("120 - %i\n", ft_recursive_factorial(120));
	printf("45 - %i\n", ft_recursive_factorial(45));
	printf("18 - %i\n", ft_recursive_factorial(18));
	printf("1 - %i\n", ft_recursive_factorial(1));
	printf("0 - %i\n", ft_recursive_factorial(0));
}
