/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:27:54 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/15 16:29:56 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_uppercase.c"
#include <stdio.h>

int main()
{
	char str1[] = "Coucou";
	char str2[] = "c0uc0u";
	char str3[] = "COUCOU";

	printf("%i\n", ft_str_is_uppercase(str1));
	printf("%i\n", ft_str_is_uppercase(str2));
	printf("%i\n", ft_str_is_uppercase(str3));

}
