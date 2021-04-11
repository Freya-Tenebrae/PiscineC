/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:27:54 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/18 10:47:57 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncmp.c"
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "test";
	char s2[] = "Test";
	char s3[] = "Coucou";
	char s4[] = "Bonjour";

	printf("%i\n", strncmp(s1, s2, 0));
	printf("%i\n", strncmp(s1, s1, 3));
	printf("%i\n", strncmp(s1, s2, 6));
	printf("%i\n", strncmp(s2, s1, 6));
	printf("%i\n", strncmp(s1, s3, 15));
	printf("%i\n", strncmp(s1, s4, 15));
	printf("%i\n", ft_strncmp(s1, s2, 0));
	printf("%i\n", ft_strncmp(s1, s1, 3));
	printf("%i\n", ft_strncmp(s1, s2, 6));
	printf("%i\n", ft_strncmp(s2, s1, 6));
	printf("%i\n", ft_strncmp(s1, s3, 15));
	printf("%i\n", ft_strncmp(s1, s4, 15));
}
