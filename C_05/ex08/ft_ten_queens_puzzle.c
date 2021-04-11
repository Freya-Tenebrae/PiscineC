/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:06:09 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/24 09:36:46 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_board(int *board)
{
	int i;

	i = 0;
	while (i < 10)
		ft_print_char(board[i++] + '0' - 1);
	ft_print_char('\n');
}

int		ft_is_safe(int *board, int x_pos, int y_pos)
{
	int i;

	i = 0;
	while (i < 10)
		if (board[i++] == y_pos && i - 1 != x_pos)
			return (1);
	i = 1;
	while (x_pos - i >= 0)
	{
		if (board[x_pos - i] == y_pos + i || board[x_pos - i] == y_pos - i)
			return (3);
		i++;
	}
	(void)x_pos;
	return (0);
}

void	ft_solve(int *board, int *nbr_solution, int x_pos)
{
	int y_pos;

	y_pos = 1;
	while (y_pos <= 10)
	{
		if (ft_is_safe(board, x_pos, y_pos) == 0)
		{
			board[x_pos] = y_pos;
			if (x_pos == 9)
			{
				ft_print_board(board);
				*nbr_solution = *nbr_solution + 1;
			}
			else
				ft_solve(board, nbr_solution, x_pos + 1);
		}
		y_pos++;
	}
	board[x_pos] = 0;
}

int		ft_ten_queens_puzzle(void)
{
	int board[10];
	int result;
	int i;

	i = 0;
	result = 0;
	while (i < 10)
		board[i++] = 0;
	ft_solve(board, &result, 0);
	return (result);
}
