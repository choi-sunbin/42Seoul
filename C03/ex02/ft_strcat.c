/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 00:54:43 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/30 13:17:44 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int		loop;
	char	*temp;

	temp = dest;
	loop = 0;
	while (*dest != 0)
	{
		dest++;
	}
	while (src[loop] != 0)
	{
		dest[loop] = src[loop];
		loop++;
	}
	dest[loop] = 0;
	return (temp);
}
