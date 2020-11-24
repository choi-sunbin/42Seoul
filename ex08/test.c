/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 16:21:59 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/24 19:45:06 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern void ft_sort_int_tab(int *tab, int size);

int main()
{	
	int arr[10] = {7,9,4,1,2,5,8,6,3,0};
	int loop;

	ft_sort_int_tab(arr, 10);
	loop = 0;
	while (loop < 10)
	{
		printf("%d ", arr[loop]);
		loop++;
	}
}


