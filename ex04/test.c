/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 16:21:59 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/24 01:31:04 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern void ft_ultimate_div_mod(int *a, int *b); 

int main()
{
	int div;
	int mod;
	div = 10;
	mod = 4;
	ft_ultimate_div_mod(&div, &mod);
	printf("div %d, mod %d", div, mod);
}


