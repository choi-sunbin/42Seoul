/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 20:14:27 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/30 23:09:43 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		word_check(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		str_change(char *str, int start, int end)
{
	int loop;

	loop = 0;
	if (str[start + loop] >= 'a' && str[start + loop] <= 'z')
	{
		str[start + loop] -= 32;
	}
	loop++;
	while (start + loop <= end)
	{
		if (str[start + loop] >= 'A' && str[start + loop] <= 'Z')
		{
			str[start + loop] += 32;
		}
		loop++;
	}
	return (start + loop);
}

char	*ft_strcapitalize(char *str)
{
	int	loop;
	int	start;
	int	end;

	start = 0;
	loop = 0;
	while (str[loop] != 0)
	{
		if (word_check(str[loop]) == 0)
		{
			end = loop;
			start = str_change(str, start, end);
		}
		loop++;
	}
	end = loop;
	start = str_change(str, start, end);
	return (str);
}
