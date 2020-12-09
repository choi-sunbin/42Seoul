/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:07:28 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/09 20:01:57 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		valid_check(char *base);
int		g_pos;

void	ft_ret_base(long long llnbr, char *base, char *str)
{
	long long	base_len;

	base_len = (long long)ft_strlen(base);
	if (llnbr >= base_len)
	{
		ft_ret_base(llnbr / base_len, base, str);
		str[g_pos++] = base[llnbr % base_len];
	}
	else if (llnbr < 0)
	{
		str[g_pos++] = '-';
		llnbr *= -1;
		ft_ret_base(llnbr, base, str);
	}
	else
	{
		str[g_pos++] = base[llnbr % base_len];
	}
}

char	*ft_putnbr_base(int nbr, char *base)
{
	long long	llnbr;
	long long	temp;
	int			size;
	char		*str;
	long long	base_len;

	g_pos = 0;
	llnbr = (long long)nbr;
	base_len = (long long)ft_strlen(base);
	temp = llnbr;
	if (valid_check(base) == 0)
		return (0);
	size = 0;
	while ((temp / base_len) != 0 || (temp % base_len) != 0)
	{
		temp /= base_len;
		size++;
	}
	if (llnbr >= 0)
		str = (char*)malloc(sizeof(char) * size + 1);
	else
		str = (char*)malloc(sizeof(char) * size + 2);
	ft_ret_base(llnbr, base, str);
	str[g_pos] = 0;
	return (str);
}
