/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:24:30 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/29 01:20:33 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_value(long long int long_num, int m_flag)
{
	char	text[100];
	int		num_size;
	int		loop;

	loop = 0;
	while (loop < 100)
	{
		text[loop++] = 0;
	}
	num_size = 0;
	while (!(long_num / 10 == 0 && long_num % 10 == 0))
	{
		text[num_size++] = long_num % 10 + '0';
		long_num /= 10;
	}
	if (m_flag == 1)
	{
		ft_putchar('-');
	}
	while (num_size >= 0)
	{
		ft_putchar(text[num_size]);
		num_size--;
	}
}

void	ft_putnbr(int nb)
{
	long long int	long_num;
	int				m_flag;

	m_flag = 0;
	long_num = (long long int)nb;
	if (long_num < 0)
	{
		m_flag = 1;
		long_num *= -1;
	}
	print_value(long_num, m_flag);
}
