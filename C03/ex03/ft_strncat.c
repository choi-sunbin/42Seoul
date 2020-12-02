/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:16:12 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/30 13:19:24 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	loop;
	char			*temp;

	temp = dest;
	loop = 0;
	while (*dest != 0)
	{
		dest++;
	}
	while (loop < nb && src[loop] != 0)
	{
		dest[loop] = src[loop];
		loop++;
	}
	dest[loop] = 0;
	return (temp);
}
