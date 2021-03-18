/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:39:29 by chahan            #+#    #+#             */
/*   Updated: 2021/02/23 14:44:05 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if ((str[index] >= 'a' && str[index] <= 'z'))
			str[index] = str[index] - 32;
		index++;
	}
	return (str);
}
