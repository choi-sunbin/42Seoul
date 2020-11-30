/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 20:14:27 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/26 17:22:04 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int loop;

	loop = 0;
	while (src[loop] != 0)
	{
		dest[loop] = src[loop];
		loop++;
	}
	dest[loop] = 0;
	return (dest);
}
