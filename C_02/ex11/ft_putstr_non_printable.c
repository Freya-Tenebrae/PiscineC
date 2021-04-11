/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 16:32:48 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/24 10:59:29 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthexadecimal(char c)
{
	char	*deffbase;

	deffbase = "0123456789abcdef";
	ft_putchar(deffbase[c / 16]);
	ft_putchar(deffbase[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < ' ' || str[i] > '~'))
		{
			ft_putchar('\\');
			ft_puthexadecimal(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
