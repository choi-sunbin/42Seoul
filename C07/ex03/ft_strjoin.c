/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:01:17 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/09 20:03:47 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int loop;

	loop = 0;
	while (str[loop] != 0)
		loop++;
	return (loop);
}

char	*ft_strcat(char *dest, char *src)
{
	int len;
	int	loop;

	len = ft_strlen(dest);
	loop = -1;
	while (*(src + (++loop)))
		*(dest + len + loop) = *(src + loop);
	*(dest + len + loop) = '\0';
	return (dest);
}

void	initialize(char *src, int size)
{
	int loop;

	loop = 0;
	while (loop < size)
	{
		src[loop] = 0;
		loop++;
	}
}

char	*ft_fillstr(int size, char *dest, char **str, char *sep)
{
	int loop;

	loop = 0;
	ft_strcat(dest, str[loop]);
	while (++loop < size)
	{
		ft_strcat(dest, sep);
		ft_strcat(dest, str[loop]);
	}
	return (dest);
}

char	*ft_strjoin(int size, char **str, char *sep)
{
	char	*dest;
	int		sep_len;
	int		str_len;
	int		loop;

	if (size == 0)
	{
		dest = (char *)malloc(sizeof(char));
		*dest = '\0';
		return (dest);
	}
	str_len = 0;
	loop = 0;
	while (loop < size)
		str_len += ft_strlen(str[loop++]);
	sep_len = ft_strlen(sep);
	dest = (char*)malloc(sizeof(char) * (str_len + sep_len * (size - 1) + 1));
	if (dest == 0)
		return (0);
	initialize(dest, str_len + sep_len * (size - 1) + 1);
	dest = ft_fillstr(size, dest, str, sep);
	return (dest);
}
