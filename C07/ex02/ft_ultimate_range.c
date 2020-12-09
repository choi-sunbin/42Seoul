/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:44:10 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/09 15:59:56 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		loop;

	if (min >= max)
		return (0);
	range[0] = (int*)malloc(sizeof(int) * (max - min));
	if (range[0] == 0)
		return (-1);
	loop = 0;
	while (loop < max - min)
	{
		range[0][loop] = min + loop;
		loop++;
	}
	return (loop);
}
