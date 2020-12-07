/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:33:13 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/07 16:24:48 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int loop;

	loop = 0;
	while (str[loop] != 0)
	{
		write(1, &str[loop], 1);
		loop++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char *argv[])
{
	if (argc == 0)
		return (0);
	ft_putstr(argv[0]);
}
