/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:33:13 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/03 01:48:39 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char* argv[])
{
	int loop;

	if (argc == 0)
		return (0);
	loop = 0;
	while (argv[0][loop] != 0)
		write(1, &argv[0][loop++], 1);
}
