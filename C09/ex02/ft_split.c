/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 21:17:53 by chahan            #+#    #+#             */
/*   Updated: 2021/03/16 14:27:41 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

long long	ft_strlen(char *str, char *charset)
{
	long long		cnt;

	cnt = 0;
	while (*str)
	{
		if (!is_charset(*str, charset))
		{
			str++;
			cnt++;
			while (*str && !is_charset(*str, charset))
				str++;
			str--;
		}
		str++;
	}
	return (cnt);
}

void		ft_strcpy(char *dest, char *src, char *fin)
{
	while (src < fin)
		*(dest)++ = *(src)++;
	*dest = 0;
}

char		**ft_split(char *str, char *charset)
{
	char		**ans;
	char		*tmp;
	int			i;

	i = 0;
	ans = (char**)malloc(sizeof(char*) * ft_strlen(str, charset) + 1);
	while (*str)
	{
		if (!is_charset(*str, charset))
		{
			tmp = str;
			str++;
			while (!is_charset(*str, charset) && *str)
				++str;
			ans[i] = (char*)malloc(str - tmp + 1);
			ft_strcpy(ans[i++], tmp, str);
		}
		str++;
	}
	ans[i] = 0;
	return (ans);
}
