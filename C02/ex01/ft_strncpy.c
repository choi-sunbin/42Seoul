/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 20:14:27 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/29 00:25:03 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	loop;
	int				flag;

	loop = 0;
	flag = 0;
	while (loop < n)
	{
		if (src[loop] == 0)
		{
			flag = 1;
		}
		if (flag == 0)
		{
			dest[loop] = src[loop];
		}
		else
		{
			dest[loop] = 0;
		}
		loop++;
	}
	return (dest);
}
