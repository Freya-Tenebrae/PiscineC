/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:27:54 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/16 12:45:52 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncpy.c"
#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "coucou";
	char dest[] = "bonjour";
	unsigned int n = 3;

	printf("%s\n", ft_strncpy(dest, src, n));
}
