/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 20:14:27 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/24 19:43:44 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	loop;
	int	min_value;
	int	min_pos;
	int	sort_loop;

	sort_loop = 0;
	while (sort_loop < size)
	{
		loop = sort_loop;
		min_value = tab[loop];
		min_pos = loop;
		while (loop < size)
		{
			if (min_value > tab[loop])
			{
				min_value = tab[loop];
				min_pos = loop;
			}
			loop++;
		}
		ft_swap(&tab[sort_loop], &tab[min_pos]);
		sort_loop++;
	}
}
