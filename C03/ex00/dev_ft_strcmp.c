/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 00:37:13 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/26 01:26:41 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int loop;
	loop = 0;
	while ((s1[loop] != 0 || s2[loop] != 0) && s1[loop] == s2[loop])
	{
		loop++;
	}
	return ((unsigned char)s1[loop] - (unsigned char)s2[loop]);
}

int main()
{
	char* a = "abc";
	char* b = "abc";
	
	char* c = "abed";
	char* d = "abg";
	
	char* e = "abg";
	char* f = "abed";
	
	printf("Real = %d, Make = %d\n",strcmp(a,b), ft_strcmp(a,b) );
	printf("Real = %d, Make = %d\n",strcmp(c,d), ft_strcmp(c,d) );
	printf("Real = %d, Make = %d\n",strcmp(e,f), ft_strcmp(e,f) );
}
