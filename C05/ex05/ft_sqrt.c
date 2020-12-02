/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 21:20:02 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/03 00:34:17 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long long	loop;

	if (nb < 0)
		return (0);
	loop = 1;
	while (loop * loop <= (long long)nb)
	{
		if (loop * loop == (long long)nb)
			return (loop);
		loop++;
	}
	return (0);
}
