/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 21:00:16 by chahan            #+#    #+#             */
/*   Updated: 2021/03/11 12:58:11 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*temp)
		temp++;
	while (*src)
	{
		*temp = *src;
		src++;
		temp++;
	}
	*temp = 0;
	return (dest);
}
