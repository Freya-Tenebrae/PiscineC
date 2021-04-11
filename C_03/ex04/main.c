/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:27:54 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/18 13:19:56 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strstr.c"
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "bonjour";
	char stralt[] = "";
	char to_find1[] = "jour";
	char to_find2[] = "o";
	char to_find3[] = "cou";
	char to_find4[] = "";

	printf("%s\n", strstr(str, to_find1));
	printf("%s\n", strstr(str, to_find2));
	printf("%s\n", strstr(str, to_find3));
	printf("%s\n", strstr(str, to_find4));
	printf("%s\n", ft_strstr(str, to_find1));
	printf("%s\n", ft_strstr(str, to_find2));
	printf("%s\n", ft_strstr(str, to_find3));
	printf("%s\n", ft_strstr(str, to_find4));
	printf("%s\n", strstr(stralt, to_find1));
	printf("%s\n", ft_strstr(stralt, to_find1));
}
