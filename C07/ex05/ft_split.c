/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:08:07 by sunbchoi          #+#    #+#             */
/*   Updated: 2020/12/09 20:02:24 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		str_in_charset(char c, char *charset)
{
	int loop;

	loop = 0;
	while (*(charset + loop))
	{
		if (*(charset + loop) == c)
			return (1);
		loop++;
	}
	return (0);
}

char	**str_malloc_count(char *str, char *charset)
{
	char	**words;
	int		state;
	int		count;
	int		len;

	state = 0;
	count = 0;
	len = 0;
	while (*(str + len))
	{
		if (str_in_charset(*(str + len), charset))
			state = 0;
		else
		{
			if (state == 0)
				count++;
			state = 1;
		}
		len++;
	}
	words = (char **)malloc(sizeof(char *) * (count + 1));
	return (words);
}

char	*str_rangecopy(char *str, char *charset, int start)
{
	char	*dest;
	int		len;
	int		loop;

	len = start;
	while (*(str + len) && !str_in_charset(*(str + len), charset))
		len++;
	dest = (char *)malloc(sizeof(char) * (len - start + 1));
	if (!dest)
		return (0);
	loop = 0;
	while (loop + start < len)
	{
		*(dest + loop) = *(str + start + loop);
		loop++;
	}
	*(dest + loop) = '\0';
	return (dest);
}

void	fill_words(char **words, char *str, char *charset)
{
	int		len;
	int		state;
	int		loop;

	len = -1;
	state = 0;
	loop = -1;
	while (*(str + (++len)))
	{
		if (str_in_charset(*(str + len), charset))
			state = 0;
		else if (state == 0)
		{
			words[++loop] = str_rangecopy(str, charset, len);
			state = 1;
		}
	}
	words[++loop] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**words;

	words = str_malloc_count(str, charset);
	fill_words(words, str, charset);
	return (words);
}
