/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 00:37:13 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/29 00:33:15 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int l;

	l = 0;
	while ((s1[l] != 0 || s2[l] != 0) && (s1[l] == s2[l] && l < n))
	{
		l++;
	}
	if (l == n)
	{
		return (0);
	}
	return ((unsigned char)s1[l] - (unsigned char)s2[l]);
}
