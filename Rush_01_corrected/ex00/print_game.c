/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_game.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaunay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 14:22:28 by llaunay           #+#    #+#             */
/*   Updated: 2021/03/21 11:47:16 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_game(int size, int *game)
{
	int i;
	int j;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			ft_putchar(game[i + j * size] + '0');
			if (i < size - 1)
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
