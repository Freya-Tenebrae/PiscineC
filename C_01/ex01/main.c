/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 09:36:12 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/14 13:52:38 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_ultimate_ft.c"

int	main ()
{
	int i;

	int* i1 = &i;
	int** i2 = &i1;
	int*** i3 = &i2;
	int**** i4 = &i3;
	int***** i5 = &i4;
	int****** i6 = &i5;
	int******* i7 = &i6;
	int******** i8 = &i7;
	int********* i9 = &i8;


	ft_ultimate_ft(i9);
	if (i == 42)
		write (1, "1", 1);
}