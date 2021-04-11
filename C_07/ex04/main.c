/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:49:05 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/26 15:05:34 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main()
{
	char nbr1[] = "   -++-+--+-01011010ab546";
	char nbr2[] = "   -++-+--+-42ab546";
	char nbr3[] = "   -++-+--+-2Az546";
	char nbr4[] = "   -++-+--+-vnab546";

	char nbr1b[] = "   -++-+--+0101010ab546";
	char nbr2b[] = "   -++-+--+42ab546";
	char nbr3b[] = "   -++-+--+2Az546";
	char nbr4b[] = "   -++-+--+vnab546";

	char nbr1c[] = "   -++-+--+-0wgwreg";
	char nbr2c[] = "   -++-+--+-0ab546";
	char nbr3c[] = "   -++-+--+-0z546";
	char nbr4c[] = "   -++-+--+-p546";

	char nbr1d[] = "   -++-+--+-abgjw3wge12";
	char nbr2d[] = "   -++-+--+-s42ab546";
	char nbr3d[] = "   -++-+--+-f2Az546";
	char nbr4d[] = "   -++-+--+-zvnab546";

	char b1[] = "01";
	char b2[] = "0123456789";
	char b3[] = "0123456789ABCDEF";
	char b4[] = "poneyvif";
	char b5[] = "";
	char b6[] = "00";
	char b7[] = "012345+678";

	printf("nbr : -42 from 01 to 01 --> %s\n", ft_convert_base(nbr1, b1, b1));
	printf("nbr : -42 from 01 to 09 --> %s\n", ft_convert_base(nbr1, b1, b2));
	printf("nbr : -42 from 01 to 0F --> %s\n", ft_convert_base(nbr1, b1, b3));
	printf("nbr : -42 from 01 to pf --> %s\n", ft_convert_base(nbr1, b1, b4));

	printf("nbr : 42 from 01 to 01 --> %s\n", ft_convert_base(nbr1b, b1, b1));
	printf("nbr : 42 from 01 to 09 --> %s\n", ft_convert_base(nbr1b, b1, b2));
	printf("nbr : 42 from 01 to 0F --> %s\n", ft_convert_base(nbr1b, b1, b3));
	printf("nbr : 42 from 01 to pf --> %s\n", ft_convert_base(nbr1b, b1, b4));

	printf("nbr : 00 from 01 to 01 --> %s\n", ft_convert_base(nbr1c, b1, b1));
	printf("nbr : 00 from 01 to 09 --> %s\n", ft_convert_base(nbr1c, b1, b2));
	printf("nbr : 00 from 01 to 0F --> %s\n", ft_convert_base(nbr1c, b1, b3));
	printf("nbr : 00 from 01 to pf --> %s\n", ft_convert_base(nbr1c, b1, b4));

	printf("nbr : -- from 01 to 01 --> %s\n", ft_convert_base(nbr1d, b1, b1));
	printf("nbr : -- from 01 to 09 --> %s\n", ft_convert_base(nbr1d, b1, b2));
	printf("nbr : -- from 01 to 0F --> %s\n", ft_convert_base(nbr1d, b1, b3));
	printf("nbr : -- from 01 to pf --> %s\n", ft_convert_base(nbr1d, b1, b4));


	printf("nbr : -42 from 09 to 01 --> %s\n", ft_convert_base(nbr2, b2, b1));
	printf("nbr : -42 from 09 to 09 --> %s\n", ft_convert_base(nbr2, b2, b2));
	printf("nbr : -42 from 09 to 0F --> %s\n", ft_convert_base(nbr2, b2, b3));
	printf("nbr : -42 from 09 to pf --> %s\n", ft_convert_base(nbr2, b2, b4));

	printf("nbr : 42 from 09 to 01 --> %s\n", ft_convert_base(nbr2b, b2, b1));
	printf("nbr : 42 from 09 to 09 --> %s\n", ft_convert_base(nbr2b, b2, b2));
	printf("nbr : 42 from 09 to 0F --> %s\n", ft_convert_base(nbr2b, b2, b3));
	printf("nbr : 42 from 09 to pf --> %s\n", ft_convert_base(nbr2b, b2, b4));

	printf("nbr : 00 from 09 to 01 --> %s\n", ft_convert_base(nbr2c, b2, b1));
	printf("nbr : 00 from 09 to 09 --> %s\n", ft_convert_base(nbr2c, b2, b2));
	printf("nbr : 00 from 09 to 0F --> %s\n", ft_convert_base(nbr2c, b2, b3));
	printf("nbr : 00 from 09 to pf --> %s\n", ft_convert_base(nbr2c, b2, b4));

	printf("nbr : -- from 09 to 01 --> %s\n", ft_convert_base(nbr2d, b2, b1));
	printf("nbr : -- from 09 to 09 --> %s\n", ft_convert_base(nbr2d, b2, b2));
	printf("nbr : -- from 09 to 0F --> %s\n", ft_convert_base(nbr2d, b2, b3));
	printf("nbr : -- from 09 to pf --> %s\n", ft_convert_base(nbr2d, b2, b4));


	printf("nbr : -42 from 0F to 01 --> %s\n", ft_convert_base(nbr3, b3, b1));
	printf("nbr : -42 from 0F to 09 --> %s\n", ft_convert_base(nbr3, b3, b2));
	printf("nbr : -42 from 0F to 0F --> %s\n", ft_convert_base(nbr3, b3, b3));
	printf("nbr : -42 from 0F to pf --> %s\n", ft_convert_base(nbr3, b3, b4));

	printf("nbr : 42 from 0F to 01 --> %s\n", ft_convert_base(nbr3b, b3, b1));
	printf("nbr : 42 from 0F to 09 --> %s\n", ft_convert_base(nbr3b, b3, b2));
	printf("nbr : 42 from 0F to 0F --> %s\n", ft_convert_base(nbr3b, b3, b3));
	printf("nbr : 42 from 0F to pf --> %s\n", ft_convert_base(nbr3b, b3, b4));

	printf("nbr : 00 from 0F to 01 --> %s\n", ft_convert_base(nbr3c, b3, b1));
	printf("nbr : 00 from 0F to 09 --> %s\n", ft_convert_base(nbr3c, b3, b2));
	printf("nbr : 00 from 0F to 0F --> %s\n", ft_convert_base(nbr3c, b3, b3));
	printf("nbr : 00 from 0F to pf --> %s\n", ft_convert_base(nbr3c, b3, b4));

	printf("nbr : -- from 0F to 01 --> %s\n", ft_convert_base(nbr3d, b3, b1));
	printf("nbr : -- from 0F to 09 --> %s\n", ft_convert_base(nbr3d, b3, b2));
	printf("nbr : -- from 0F to 0F --> %s\n", ft_convert_base(nbr3d, b3, b3));
	printf("nbr : -- from 0F to pf --> %s\n", ft_convert_base(nbr3d, b3, b4));


	printf("nbr : -42 from pf to 01 --> %s\n", ft_convert_base(nbr4, b4, b1));
	printf("nbr : -42 from pf to 09 --> %s\n", ft_convert_base(nbr4, b4, b2));
	printf("nbr : -42 from pf to 0F --> %s\n", ft_convert_base(nbr4, b4, b3));
	printf("nbr : -42 from pf to pf --> %s\n", ft_convert_base(nbr4, b4, b4));

	printf("nbr : 42 from pf to 01 --> %s\n", ft_convert_base(nbr4b, b4, b1));
	printf("nbr : 42 from pf to 09 --> %s\n", ft_convert_base(nbr4b, b4, b2));
	printf("nbr : 42 from pf to 0F --> %s\n", ft_convert_base(nbr4b, b4, b3));
	printf("nbr : 42 from pf to pf --> %s\n", ft_convert_base(nbr4b, b4, b4));

	printf("nbr : 00 from pf to 01 --> %s\n", ft_convert_base(nbr4c, b4, b1));
	printf("nbr : 00 from pf to 09 --> %s\n", ft_convert_base(nbr4c, b4, b2));
	printf("nbr : 00 from pf to 0F --> %s\n", ft_convert_base(nbr4c, b4, b3));
	printf("nbr : 00 from pf to pf --> %s\n", ft_convert_base(nbr4c, b4, b4));

	printf("nbr : -- from pf to 01 --> %s\n", ft_convert_base(nbr4d, b4, b1));
	printf("nbr : -- from pf to 09 --> %s\n", ft_convert_base(nbr4d, b4, b2));
	printf("nbr : -- from pf to 0F --> %s\n", ft_convert_base(nbr4d, b4, b3));
	printf("nbr : -- from pf to pf --> %s\n", ft_convert_base(nbr4d, b4, b4));


	printf("nbr : -42 from 01 to -- --> %s\n", ft_convert_base(nbr1, b1, b5));
	printf("nbr : -42 from 01 to 00 --> %s\n", ft_convert_base(nbr1, b1, b6));
	printf("nbr : -42 from 01 to 0+ --> %s\n", ft_convert_base(nbr1, b1, b7));
	printf("nbr : -42 from -- to 01 --> %s\n", ft_convert_base(nbr1, b5, b1));
	printf("nbr : -42 from 00 to 01 --> %s\n", ft_convert_base(nbr1, b6, b1));
	printf("nbr : -42 from 0+ to 01 --> %s\n", ft_convert_base(nbr1, b7, b1));
}
