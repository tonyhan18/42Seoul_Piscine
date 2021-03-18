/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:09:57 by chahan            #+#    #+#             */
/*   Updated: 2021/03/09 20:51:34 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		index;

	index = 0;
	while (index + 1 < size && src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = 0;
	while (src[index])
		++index;
	return (index);
}
