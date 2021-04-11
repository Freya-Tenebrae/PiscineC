/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:54:52 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/24 15:48:02 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strdup.c"

int	main()
{
	char *str = "CeciEstUnTest";
	char *strtest1;
	char *strtest2;

	strtest1 = strdup(str);
	strtest2 = ft_strdup(str);
	printf("%s\n%s\n", strtest1, strtest2);
}
