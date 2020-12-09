/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:09:11 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/09 19:40:06 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		loop;

	len = 0;
	while (src[len] != 0)
		len++;
	dest = (char*)malloc(sizeof(char) * (len + 1));
	if (dest == 0)
		return (0);
	loop = 0;
	while (src[loop] != 0)
	{
		dest[loop] = src[loop];
		loop++;
	}
	dest[loop] = '\0';
	return (dest);
}
