/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 16:21:59 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/24 02:45:32 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern void ft_rev_int_tab(int *tab, int size);

int main()
{	
	int arr1[5] = {0,1,2,3,4};
	int arr2[6] = {0,1,2,3,4,5};
	
	ft_rev_int_tab(arr1, 5);
	printf("%d %d %d %d %d", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);

	ft_rev_int_tab(arr2, 6);
	printf("%d %d %d %d %d %d", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4], arr2[5]);
}


