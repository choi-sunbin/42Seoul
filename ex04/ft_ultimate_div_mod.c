/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 20:14:27 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/24 01:29:02 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int value_a = *a;
	int value_b = *b;

	*a = value_a / value_b;
	*b = value_a % value_b;
}
