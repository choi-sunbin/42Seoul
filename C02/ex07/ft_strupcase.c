/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 20:14:27 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/28 23:46:39 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int		l;
	char	interval;

	interval = 'A' - 'a';
	l = 0;
	while (str[l] != 0)
	{
		if (str[l] >= 'a' && str[l] <= 'z')
		{
			str[l] += interval;
		}
		l++;
	}
	return (str);
}
