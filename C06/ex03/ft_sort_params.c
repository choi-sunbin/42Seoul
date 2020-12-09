/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 19:15:46 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/09 14:01:40 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int loop;

	loop = 0;
	while (str[loop] != 0)
	{
		write(1, &str[loop++], 1);
	}
	write(1, "\n", 1);
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

void	ft_sort_argc(char **arr, int size)
{
	int		loop;
	int		loop2;
	char	*temp;

	loop = 1;
	while (loop < size)
	{
		loop2 = loop + 1;
		while (loop2 < size)
		{
			if ((ft_strcmp(arr[loop2], arr[loop])) < 0)
			{
				temp = arr[loop];
				arr[loop] = arr[loop2];
				arr[loop2] = temp;
			}
			loop2++;
		}
		loop++;
	}
}

int		main(int argc, char **argv)
{
	int loop;

	ft_sort_argc(argv, argc);
	loop = 1;
	while (loop < argc)
	{
		ft_putstr(argv[loop]);
		loop++;
	}
	return (0);
}
