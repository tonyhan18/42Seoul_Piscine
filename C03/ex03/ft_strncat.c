/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 21:08:27 by chahan            #+#    #+#             */
/*   Updated: 2021/03/11 12:59:39 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char				*temp;
	unsigned int		i;

	temp = dest;
	i = 0;
	while (*temp)
		temp++;
	while (*src && i < nb)
	{
		*temp = *src;
		src++;
		temp++;
		i++;
	}
	*temp = 0;
	return (dest);
}
