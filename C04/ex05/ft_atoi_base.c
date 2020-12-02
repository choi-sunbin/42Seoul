/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 01:21:00 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/03 01:25:46 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		to_num(char c, char *base)
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

int		ft_strlen(char *str)
{
	int loop;

	loop = 0;
	while (str[loop] != 0)
		loop++;
	return (loop);
}

int		valid_check(char *base)
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

int		ft_atoi_base(char *str, char *base)
{
	int b_size;
	int value;
	int loop;
	int sign;

	sign = 1;
	b_size = ft_strlen(base);
	if (valid_check(base) == 0)
		return (0);
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
		value *= b_size;
		value += to_num(str[loop++], base);
	}
	value *= sign;
	return (value);
}
