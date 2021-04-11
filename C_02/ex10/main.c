/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:27:54 by cmaginot          #+#    #+#             */
/*   Updated: 2021/04/01 09:53:01 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlcpy.c"
#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "coucou";
	char dest[] = "bou";
	unsigned int n = 10;

	printf("%lu\n", strlcpy(dest, src, n));
	printf("%s\n", dest);
	printf("%i\n", ft_strlcpy(dest, src, n));
	printf("%s\n", dest);
}
