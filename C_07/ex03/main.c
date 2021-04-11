/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:54:52 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/26 15:54:06 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strjoin.c"
#include <stdlib.h>

int	main()
{
	char *str[3] = {"Ceci est un test", "qui va demontrer",  "l'efficacite de la fonction"};
	char *separation = "-*-";
	char *result;
	int size = 3;
	int i = -1;

	result = ft_strjoin(size, str, separation);
	printf("String a concatener :\n");
	while (++i < size)
		printf("%s\n", str[i]);
	printf("String separation : %s\n", separation);
	printf("String concatener : %s\n", result);
	free (result);
}
