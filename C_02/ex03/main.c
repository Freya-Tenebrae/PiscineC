/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:27:54 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/16 15:52:38 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_numeric.c"
#include <stdio.h>

int main()
{
	char str1[] = "2561651";
	char str2[] = "coucou";

	printf("%i\n", ft_str_is_numeric(str1));
	printf("%i\n", ft_str_is_numeric(str2));

}
