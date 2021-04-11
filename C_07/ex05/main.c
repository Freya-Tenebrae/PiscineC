/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:51:29 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/29 11:40:37 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_split.c"

int	main()
{
	char **split;
	char *s = "coucou-ceci est*un -*test";
	char *s1 = "coucou";
	char *s2 = "-*-*-";
	char *d = "-*";
	char *d1 = "";


	printf("---------------------------");
	split = ft_split(s, d);
	printf("original string :\n%s\n", s);
	printf("separator : %s\n", d);
	printf("string 1 : %s\n", split[0]);
	printf("string 2 : %s\n", split[1]);
	printf("string 3 : %s\n", split[2]);
	printf("string 4 : %s\n", split[3]);
	printf("string 5 : %s\n", split[4]);

	printf("---------------------------");
	split = ft_split(s1, d);
	printf("original string :\n%s\n", s1);
	printf("separator : %s\n", d);
	printf("string 1 : %s\n", split[0]);
	printf("string 2 : %s\n", split[1]);

	printf("---------------------------");
	split = ft_split(s2, d);
	printf("original string :\n%s\n", s2);
	printf("separator : %s\n", d);
	printf("string 1 : %s\n", split[0]);

	printf("---------------------------");
	split = ft_split(s1, d);
	printf("original string :\n%s\n", s1);
	printf("separator : %s\n", d);
	printf("string 1 : %s\n", split[0]);
	printf("string 2 : %s\n", split[1]);

	printf("---------------------------");
	split = ft_split(s, d1);
	printf("original string :\n%s\n", s);
	printf("separator : %s\n", d1);
	printf("string 1 : %s\n", split[0]);
	printf("string 2 : %s\n", split[1]);

}
