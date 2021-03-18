/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 00:18:15 by chahan            #+#    #+#             */
/*   Updated: 2021/03/16 14:27:06 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		len;
	int		*tmp;

	if (min >= max)
		return (0);
	len = max - min;
	*range = (int*)malloc(sizeof(int) * len + 1);
	if (!*range)
		return (-1);
	tmp = *range;
	while (min < max)
	{
		*(tmp++) = min++;
	}
	return (len);
}
