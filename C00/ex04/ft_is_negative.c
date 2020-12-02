/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 20:35:12 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/23 13:29:26 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char print_value;

	if (n >= 0)
	{
		print_value = 'P';
	}
	else
	{
		print_value = 'N';
	}
	write(1, &print_value, 1);
}
