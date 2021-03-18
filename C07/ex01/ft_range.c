/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 21:43:05 by chahan            #+#    #+#             */
/*   Updated: 2021/03/14 20:45:23 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*range;
	int		i;

	if (min >= max)
		return (0);
	range = (int*)malloc(sizeof(int) * (max - min));
	if (!range)
		return (0);
	i = 0;
	while (min < max)
	{
		range[i++] = min++;
	}
	return (range);
}
