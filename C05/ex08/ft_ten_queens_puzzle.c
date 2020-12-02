/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 21:34:13 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/02 23:48:42 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		queen_check(int chess_map[10][10], int x, int y)
{
	int loop;

	loop = 0;
	while (loop < 10)
	{
		if (chess_map[loop][x] == 1 || chess_map[y][loop] == 1)
			return (0);
		if (x + loop < 10)
		{
			if (y + loop < 10 && chess_map[y + loop][x + loop] == 1)
				return (0);
			if (y - loop >= 0 && chess_map[y - loop][x + loop] == 1)
				return (0);
		}
		if (x - loop >= 0)
		{
			if (y + loop < 10 && chess_map[y + loop][x - loop] == 1)
				return (0);
			if (y - loop >= 0 && chess_map[y - loop][x - loop] == 1)
				return (0);
		}
		loop++;
	}
	return (1);
}

void	print_map(int chess_map[10][10])
{
	int		loop;
	int		loop2;
	char	c;

	loop = 0;
	loop2 = 0;
	while (loop < 10)
	{
		loop2 = 0;
		while (loop2 < 10)
		{
			if (chess_map[loop][loop2] == 1)
			{
				c = loop2 + '0';
				write(1, &c, 1);
			}
			loop2++;
		}
		loop++;
	}
	write(1, "\n", 1);
}

void	ft_recursive_puzzle(int chess_map[10][10], int y, int *count)
{
	int loop;

	loop = 0;
	while (loop < 10)
	{
		if (queen_check(chess_map, loop, y) == 1 && y < 9)
		{
			chess_map[y][loop] = 1;
			ft_recursive_puzzle(chess_map, y + 1, count);
			chess_map[y][loop] = 0;
		}
		if (queen_check(chess_map, loop, y) == 1 && y == 9)
		{
			chess_map[y][loop] = 1;
			(*count)++;
			print_map(chess_map);
			chess_map[y][loop] = 0;
		}
		loop++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int chess_map[10][10];
	int loop;
	int count[1];

	loop = 0;
	count[0] = 0;
	while (loop < 100)
	{
		chess_map[loop / 10][loop % 10] = 0;
		loop++;
	}
	ft_recursive_puzzle(chess_map, 0, count);
	return (*count);
}
