/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 08:58:10 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/22 11:04:13 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_rev(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 0;
	while (i < argc / 2)
	{
		str = argv[i];
		argv[i] = argv[argc - i - 1];
		argv[argc - i - 1] = str;
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	ft_rev(argc, argv);
	while (i < argc - 1)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
