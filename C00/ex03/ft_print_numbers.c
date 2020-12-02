/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 20:13:51 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/23 13:26:54 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char start_char;
	char end_char;

	start_char = '0';
	end_char = '9';
	while (start_char <= end_char)
	{
		write(1, &start_char, 1);
		start_char++;
	}
}
