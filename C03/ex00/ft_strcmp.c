/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 00:37:13 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/29 00:27:12 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int loop;

	loop = 0;
	while ((s1[loop] != 0 || s2[loop] != 0) && s1[loop] == s2[loop])
	{
		loop++;
	}
	return ((unsigned char)s1[loop] - (unsigned char)s2[loop]);
}
