/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:27:54 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/24 18:12:06 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlcat.c"
#include <stdio.h>
#include <string.h>

int main()
{
	char src1[] = "coucou";
	char dest1[20] = "";
	char dest2[20] = "";
	char dest3[20] = "";
	char dest4[20] = "";
	char dest5[20] = "";
	char dest6[20] = "";
	char dest7[20] = "";
	char dest8[20] = "";

	printf("%lu\n", strlcat(dest1, src1, 5));
	printf("%s\n", dest1);
	printf("%i\n", ft_strlcat(dest2, src1, 5));
	printf("%s\n", dest2);
	
	printf("%lu\n", strlcat(dest3, src1, 10));
	printf("%s\n", dest3);
	printf("%i\n", ft_strlcat(dest4, src1, 10));
	printf("%s\n", dest4);
	
	printf("%lu\n", strlcat(dest5, src1, 20));
	printf("%s\n", dest5);
	printf("%i\n", ft_strlcat(dest6, src1, 20));
	printf("%s\n", dest6);
	
	printf("%lu\n", strlcat(dest7, src1, 0));
	printf("%s\n", dest7);
	printf("%i\n", ft_strlcat(dest8, src1, 0));
	printf("%s\n", dest8);

	char dest11[20] = "bonjour";
	char dest21[20] = "bonjour";
	char dest31[20] = "bonjour";
	char dest41[20] = "bonjour";
	char dest51[20] = "bonjour";
	char dest61[20] = "bonjour";
	char dest71[20] = "bonjour";
	char dest81[20] = "bonjour";

	printf("%lu\n", strlcat(dest11, src1, 5));
	printf("%s\n", dest11);
	printf("%i\n", ft_strlcat(dest21, src1, 5));
	printf("%s\n", dest21);
	
	printf("%lu\n", strlcat(dest31, src1, 10));
	printf("%s\n", dest31);
	printf("%i\n", ft_strlcat(dest41, src1, 10));
	printf("%s\n", dest41);
	
	printf("%lu\n", strlcat(dest51, src1, 20));
	printf("%s\n", dest51);
	printf("%i\n", ft_strlcat(dest61, src1, 20));
	printf("%s\n", dest61);
	
	printf("%lu\n", strlcat(dest71, src1, 0));
	printf("%s\n", dest71);
	printf("%i\n", ft_strlcat(dest81, src1, 0));
	printf("%s\n", dest81);
}
