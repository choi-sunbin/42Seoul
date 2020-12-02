/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:06:27 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/02 23:06:04 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	loop;

	loop = 0;
	while (str[loop] != 0)
		loop++;
	return (loop);
}

int		valid_check(char *base)
{
	int loop;
	int loop2;

	if (base[0] == 0 || base[1] == 0)
		return (0);
	loop = 0;
	while (base[loop] != 0)
	{
		loop2 = loop + 1;
		while (base[loop2] != 0)
		{
			if (base[loop2] == base[loop])
				return (0);
			loop2++;
		}
		if (base[loop] == '+' || base[loop] == '-')
			return (0);
		loop++;
	}
	return (1);
}

void	ft_print_base(long long llnbr, char *base)
{
	long long base_len;

	base_len = (long long)ft_strlen(base);
	if (llnbr >= base_len)
	{
		ft_print_base(llnbr / base_len, base);
		ft_putchar(base[llnbr % base_len]);
	}
	else if (llnbr < 0)
	{
		ft_putchar('-');
		llnbr *= -1;
		ft_print_base(llnbr, base);
	}
	else
	{
		ft_putchar(base[llnbr % base_len]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	llnbr;

	llnbr = (long long)nbr;
	if (valid_check(base) == 0)
		return ;
	ft_print_base(llnbr, base);
}
