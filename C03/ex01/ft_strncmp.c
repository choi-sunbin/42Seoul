/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 00:37:13 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/26 18:03:30 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int loop;

	loop = 0
	while ((s1[loop] != 0 || s2[loop] != 0)&& s1[loop] == s2[loop]  && loop < n)
	{
		loop++;
	}
	if (loop == n)
	{
		return 0;
	}
	return ((unsigned char)s1[loop] - (unsigned char)s2[loop]);
}
