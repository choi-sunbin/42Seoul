/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:55:59 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/24 00:21:53 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_value(int pos[10], int max)
{
	int		loop;
	int		rev_cnt;
	char	value[11];

	loop = 0;
	rev_cnt = 10 - max;
	while (loop < max)
	{
		value[loop] = pos[loop] + '0';
		ft_putchar(value[loop]);
		loop++;
	}
	if (pos[0] != rev_cnt)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	process_cnt(int pos[10], int max, int cur)
{
	while ((cur >= 0) && (cur == max - 1 || pos[cur] < pos[cur + 1]))
	{
		print_value(pos, max);
		while (pos[cur] >= 9 || (pos[cur] < pos[cur + 1]))
		{
			cur--;
			if (cur < 0)
			{
				break ;
			}
			pos[cur] += 1;
			while ((cur < max - 1 && (pos[cur] < pos[cur + 1])))
			{
				pos[cur + 1] = pos[cur] + 1;
				cur++;
				if (cur == max - 1)
				{
					print_value(pos, max);
				}
			}
		}
		pos[cur]++;
	}
}

void	ft_print_comb(void)
{
	int	pos[10];
	int	loop;
	int	max;
	int cur;

	max = 3;
	cur = max - 1;
	loop = 0;
	while (loop < 10)
	{
		pos[loop] = 0;
		loop++;
	}
	loop = 0;
	while (loop < max)
	{
		pos[loop] = loop;
		loop++;
	}
	process_cnt(pos, max, cur);
}
