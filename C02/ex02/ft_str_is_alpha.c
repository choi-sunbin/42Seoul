/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 20:14:27 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/28 23:45:11 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int l;

	l = 0;
	while (str[l] != 0)
	{
		if (!(str[l] >= 'a' && str[l] <= 'z'))
		{
			if (!(str[l] >= 'A' && str[l] <= 'Z'))
			{
				return (0);
			}
		}
		l++;
	}
	return (1);
}
