/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:27:54 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/18 11:00:16 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncat.c"
#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "coucou";
	char dest1[20] = "bonjour";
	char dest2[20] = "bonjour";
	char dest3[20] = "bonjour";
	char dest4[20] = "bonjour";
	char dest5[20] = "bonjour";
	char dest6[20] = "bonjour";
	char dest7[20] = "";
	char dest8[20] = "";

	printf("%s\n", strncat(dest1, src, 4));
	printf("%s\n", ft_strncat(dest2, src, 4));
	printf("%s\n", strncat(dest3, src, 0));
	printf("%s\n", ft_strncat(dest4, src, 0));
	printf("%s\n", strncat(dest5, src, 10));
	printf("%s\n", ft_strncat(dest6, src, 10));
	printf("%s\n", strncat(dest7, src, 4));
	printf("%s\n", ft_strncat(dest8, src, 4));
}
