/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 17:52:14 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/24 09:55:16 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_fibonacci.c"

int	main()
{
	printf("12 - %i\n", ft_fibonacci(12));
	printf("15 - %i\n", ft_fibonacci(15));
	printf("-3 - %i\n", ft_fibonacci(-3));
	printf("0 - %i\n", ft_fibonacci(0));
	printf("1 - %i\n", ft_fibonacci(1));
	printf("25 - %i\n", ft_fibonacci(25));
}
