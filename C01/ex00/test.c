/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 16:21:59 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/23 22:01:28 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern void ft_ft(int *num); 

int main()
{	
	int *n;
 	int a = 1;
	n = &a;
	ft_ft(n);
	printf("%d", a);
}


