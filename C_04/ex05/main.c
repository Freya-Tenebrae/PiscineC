/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 16:38:23 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/20 14:55:57 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi_base.c"
#include <stdio.h>

int		main()
{
	char nbr1[] = "   -++-+--+-0101010ab546";
	char nbr2[] = "   -++-+--+-42459ab546";
	char nbr3[] = "   -++-+--+-2Az546";
	char nbr4[] = "   -++-+--+-vnab546";
	char b1[] = "01";
	char b2[] = "0123456789";
	char b3[] = "0123456789ABCDEF";
	char b4[] = "poneyvif";
	char b5[] = "";
	char b6[] = "00";
	char b7[] = "012345+678";

	printf("%i\n", ft_atoi_base(nbr1, b1));
	printf("%i\n", ft_atoi_base(nbr2, b2));
	printf("%i\n", ft_atoi_base(nbr3, b3));
	printf("%i\n", ft_atoi_base(nbr4, b4));
	printf("%i\n", ft_atoi_base(nbr2, b5));
	printf("%i\n", ft_atoi_base(nbr2, b6));
	printf("%i\n", ft_atoi_base(nbr2, b7));
}
