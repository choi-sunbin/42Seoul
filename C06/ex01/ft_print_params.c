/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:50:09 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/09 13:55:30 by sunbchoi         ###   ########.fr       */
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
	int loop;
	int text_loop;

	if (argc == 0)
		return (0);
	loop = 1;
	while (loop < argc)
	{
		text_loop = 0;
		ft_putstr(argv[loop]);
		loop++;
	}
}
