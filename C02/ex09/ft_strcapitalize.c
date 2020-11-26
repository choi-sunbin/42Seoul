/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 20:14:27 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/25 22:29:57 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	word_check(char c)
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

void	str_change(char *str, int *start, int *end)
{
	if (str[*start] >= 'a' && str[*start] <= 'z')
	{
		str[(*start)++] -= 32;
	}
	while (*start <= *end)
	{
		if (str[*start] >= 'A' && str[*start] <= 'Z')
		{
			str[*start] += 32; 
		}
		(*start)++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	loop;
	int	start;
	int	end;

	start = 0;
	loop = 0;
	while(str[loop] != 0)
	{
		if (word_check(str[loop]) == 0)
		{
			end = loop;
			str_change(str, &start, &end);
		}	
		loop++;
	}
	return (str);
}
