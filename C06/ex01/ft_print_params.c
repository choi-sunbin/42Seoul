/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:50:09 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/03 01:53:25 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char* argv[])
{
	int loop;
	int text_loop;

	if (argc == 0)
		return (0);
	loop = 1;
	while (argv[loop] != 0)
	{
		text_loop = 0;
		while(argv[loop][text_loop] != 0)
			write(1, argv[loop][text_loop++])
		loop++;
	}
}
