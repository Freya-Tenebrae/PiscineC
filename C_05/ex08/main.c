/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:03:22 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/25 08:42:52 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ten_queens_puzzle.c"

int	main()
{
	int res;

	res = ft_ten_queens_puzzle();
	printf("%i\n", res);
}
