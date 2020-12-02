/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 16:21:59 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/30 22:26:27 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

extern unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{	
	char dest[2];
	char src[100] = "ccccC";
	//char dest2[2];
	//char src2[100] = "ccccC";
	//int a;

	printf("%s %d\n",dest, ft_strlcpy(dest,src, 7));
	//a = strlcpy(dest2, src2, 7);
	//printf("%s %d\n",dest2, a); 

}


