/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:01:06 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/09 19:48:13 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern char *ft_convert_base(char *nbr, char *base_from, char* base_to);

int main()
{
	char* str;

	str = ft_convert_base("  ++-BBCCDD", "ABCDEFGHIJ", "012");
	printf("%s", str);
}
