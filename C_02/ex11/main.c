/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:27:54 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/17 11:04:20 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr_non_printable.c"
#include <stdio.h>

int main()
{
	char str1[] = "Coucou";
	ft_putstr_non_printable(str1);
	printf("%s\n", "\n");
	char str2[] = "c0uc0u";
	ft_putstr_non_printable(str2);
	printf("%s\n", "\n");
	char str3[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str3);
	printf("%s\n", "\n");


}
