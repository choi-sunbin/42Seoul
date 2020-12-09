/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:02:57 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/09 20:01:20 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_convert_base(char *nbr, char *base_from, char *base_to);
int			to_num(char c, char *base);
int			ft_strlen(char *str);
int			valid_check(char *base);
long long	ft_atoi_base(char *str, char *base);
char		*ft_putnbr_base(int nbr, char *base);

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	num;
	char		*str;

	if (valid_check(base_from) == 0 ||
			valid_check(base_to) == 0)
	{
		return (0);
	}
	num = ft_atoi_base(nbr, base_from);
	if (num <= -2147483648 || num > 2147483647)
		return (0);
	str = ft_putnbr_base((int)num, base_to);
	return (str);
}

int			to_num(char c, char *base)
{
	int	loop;
	int	result;

	loop = 0;
	result = -1;
	while (base[loop] != 0)
	{
		if (base[loop] == c)
			result = loop;
		loop++;
	}
	return (result);
}

int			ft_strlen(char *str)
{
	int loop;

	loop = 0;
	while (str[loop] != 0)
		loop++;
	return (loop);
}

int			valid_check(char *base)
{
	int loop;
	int loop2;

	if (base[0] == 0)
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
		if (base[loop] == '+' || base[loop] == '-' || base[loop] == ' ')
			return (0);
		loop++;
	}
	if (loop == 1)
		return (0);
	return (1);
}

long long	ft_atoi_base(char *str, char *base)
{
	int			b_size;
	long long	value;
	int			loop;
	int			sign;

	sign = 1;
	b_size = ft_strlen(base);
	if (valid_check(base) == 0)
		return (-1);
	while (*str == ' ' || *str == '\f' || *str == '\n' ||
			*str == '\r' || *str == '\t' || *str == '\v')
		str++;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	value = 0;
	loop = 0;
	while (to_num(str[loop], base) != -1)
	{
		value *= (long long)b_size;
		value += (long long)to_num(str[loop++], base);
	}
	value *= (long long)sign;
	return (value);
}
