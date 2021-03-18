/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_dev.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:21:38 by chahan            #+#    #+#             */
/*   Updated: 2021/03/16 18:58:56 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

long long	ft_strlen(char *str)
{
	long long	len;

	len = 0;
	while (str[len] != 0)
		len++;
	return (len);
}

char		*ft_strcat(char *ans, char *str)
{
	while (*str)
		*(ans++) = *(str++);
	return (ans);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	char			*ans;
	char			*tmp;
	long long		len;
	int				i;

	if (size == 0)
	{
		ans = (char*)malloc(1);
		ans[0] = 0;
		return (ans);
	}
	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	ans = (char*)malloc(len + (size - 1) * ft_strlen(sep) + 1);
	i = 1;
	tmp = ft_strcat(ans, strs[0]);
	while (i < size)
	{
		tmp = ft_strcat(tmp, sep);
		tmp = ft_strcat(tmp, strs[i++]);
	}
	*tmp = 0;
	return (ans);
}

int		main(void)
{
	char **strs = (char**)malloc(4 * sizeof(strs));
	strs[0] = "lol";
	strs[1] = "1234";
	strs[2] = "poiuic";
	strs[3] = "1234";
	char *ans = ft_strjoin(4, (char**)strs, "PPP");
	printf("%s\n", ans);
}
