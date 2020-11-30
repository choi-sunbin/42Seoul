/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 01:21:00 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/29 01:43:55 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int value;
	int sign;

	value = 0;
	sign = 0;
	while (!(*str >= '0' && *str <= '9'))
	{
		if (*str == '-')
			sign++;
		printf("%c\n", *str);
		str++;
	}
	while (*str != 0)
	{
		value *= 10;
		value += *str - '0';
		str++;
	}
	if (sign % 2 == 1)
		value *= -1;
	return (value);
}
