/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:39:29 by chahan            #+#    #+#             */
/*   Updated: 2021/02/23 14:47:51 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if ((str[index] >= 'A' && str[index] <= 'Z'))
			str[index] = str[index] + 32;
		index++;
	}
	return (str);
}
