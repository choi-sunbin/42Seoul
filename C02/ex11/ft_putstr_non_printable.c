/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 20:14:27 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/25 23:37:21 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	word_check(char c)
{
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	print_hex(unsigned char c)
{
	unsigned char l_value;
	unsigned char r_value;

	l_value = c / 16;
	r_value = c % 16;

	if (l_value >= 10)
		l_value += 'a' - 10;
	else 
		l_value += '0';
	if (r_value >= 10)
		r_value += 'a' - 10;
	else 
		r_value += '0';
	ft_putchar('\\');
	ft_putchar(l_value);
	ft_putchar(r_value);
}

void	ft_putstr_non_printable(char *str)
{
	int loop;

	while (str[loop] != 0)
	{
		if (word_check(str[loop]) == 0)
		{
			print_hex((unsigned char)str[loop]);
		}
		else
		{
			ft_putchar(str[loop]);
		}
		loop++;
	}
}

int main()
{
	char	*arr = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(arr);
}
