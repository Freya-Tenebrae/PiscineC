/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:27:54 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/17 10:32:55 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.c"
#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "coucou";
	char dest[] = "bonjour";
	

	printf("%s\n", ft_strcpy(dest, src));
	printf("%s\n", dest);
	printf("%s\n", src);
}
