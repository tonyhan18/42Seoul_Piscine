/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 21:14:19 by chahan            #+#    #+#             */
/*   Updated: 2021/03/15 20:02:35 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char			*src_cp;
	long long		i;

	i = 0;
	while (src[i])
		++i;
	src_cp = (char*)malloc(i + 1);
	src_cp[i] = 0;
	while (--i >= 0)
		src_cp[i] = src[i];
	return (src_cp);
}
