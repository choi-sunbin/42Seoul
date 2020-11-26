/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:48:28 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/27 02:28:13 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(*str)
{
	int loop;

	while (str[loop] != 0)
	{
		loop++;
	}
	return (loop);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int loop;
	
	loop = 0;
	while (*dest != 0)
		dest++;
		size--;
	if (size <= 0)
		return (ft_strlen(str));
	loop = 0;
	while (src[loop] != 0 || loop < size-1)
		dest[loop] = src[loop];
		loop++;
	dest[loop] = 0;
	return (loop + ft_strlen(str));
}
