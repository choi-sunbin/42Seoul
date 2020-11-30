/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:27:13 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/11/29 00:33:54 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	loop;
	int cur_pos;

	cur_pos = 0;
	loop = 0;
	if (*to_find == 0)
		return (str);
	while (str[cur_pos] != 0)
	{
		loop = 0;
		while ((str[cur_pos + loop] == to_find[loop]) && to_find[loop] != 0)
		{
			loop++;
			if (to_find[loop] == 0)
			{
				return (&str[cur_pos]);
			}
		}
		cur_pos++;
	}
	return (0);
}
