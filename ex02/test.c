/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 16:21:59 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/24 01:12:45 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern void ft_swap(int *a, int *b);

int main()
{
	int a_10;
	int b_20;

	int *pa;
	int *pb;

	a_10 = 10;
	b_20 = 20;
	
	printf("%d | %d\n", a_10, b_20);

	pa = &a_10;
	pb = &b_20;

	ft_swap(pa, pb);
	printf("%d | %d", a_10, b_20);
}


