/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:27:54 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/18 10:58:09 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcat.c"
#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "coucou";
	char dest1[20] = "bonjour";
	char dest2[20] = "bonjour";
	char dest3[20] = "";
	char dest4[20] = "";

	printf("%s\n", strcat(dest1, src));
	printf("%s\n", ft_strcat(dest2, src));
	printf("%s\n", strcat(dest3, src));
	printf("%s\n", ft_strcat(dest4, src));
}
