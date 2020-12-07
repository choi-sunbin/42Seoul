/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 19:15:46 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/07 19:58:48 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int loop;

	loop = 0;
	while (str[loop] != 0 )
	{
		write(1, &str[loop], 1);
	}
}

void	ft_swap(char * *str1, char * *str2)
{
	char **temp;
	
	temp = str1;
	str1 = str2;
	str2 = temp;
}

int		ft_strcmp(char *str1, char *str2)
{
	int loop;
	
	loop = 0;
	while ((str1[loop] != 0 || str2[loop] != 0) &&
			(str1[loop] == str2[loop]))
		loop++;
	return ((unsigned char)str1[loop] - (unsigned char)str2[loop]);
}

int		main(int argc, char **argv)
{
	int loop;

	loop = 0;
	while (loop < argc-2)
	{
		if (ft_strcmp(argv[loop], argv[loop + 1]) < 0)
		{
			ft_swap(&argv[loop], &argv[loop+1]);
		}
		loop++;
	}
	
	loop = 1;
	while (loop < argc)
	{
		printf("%d,",loop);
		ft_putstr(argv[loop]);
		loop++;
	}
}
