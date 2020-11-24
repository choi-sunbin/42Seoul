/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 16:21:59 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/24 01:23:19 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int div;
	int mod;

	ft_div_mod(35, 10, &div, &mod);
	printf("div %d, mod %d", div, mod);
}


