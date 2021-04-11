/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:27:54 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/17 11:36:22 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcmp.c"
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "coucou";
	char s2[] = "courage";
	char s3[] = "coucou";
	char s4[] = "coucou";
	char s5[] = "courage";
	char s6[] = "coucou";

	printf("%i\n", strcmp(s1, s2));
	printf("%i\n", strcmp(s3, s4));
	printf("%i\n", strcmp(s5, s6));
	printf("%i\n", ft_strcmp(s1, s2));
	printf("%i\n", ft_strcmp(s3, s4));
	printf("%i\n", ft_strcmp(s5, s6));
}
