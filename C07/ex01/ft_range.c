/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:09:59 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/09 19:40:25 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*arr;
	int		loop;

	loop = 0;
	arr = (int*)malloc(sizeof(int) * (max - min));
	if (max - min <= 0)
	{
		return (0);
	}
	while (loop < max - min)
	{
		arr[loop] = min + loop;
		loop++;
	}
	return (arr);
}
