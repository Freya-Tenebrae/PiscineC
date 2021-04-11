/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:27:54 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/16 09:09:41 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcapitalize.c"
#include <stdio.h>

int main()
{
	char str[] = "saLuT, CoMMeNt tU vas ? 42Mots qUARAnTe-DeuX; cinQUaNtE+Et+uN";

	printf("%s\n", ft_strcapitalize(str));

}
