/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 21:21:48 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/03 00:37:35 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long long loop;

	loop = 2;
	if (nb <= 1)
		return (0);
	while (loop != (long long)nb && loop * loop <= (long long)nb)
	{
		if ((long long)nb % loop == 0)
			return (0);
		loop++;
	}
	return (1);
}
