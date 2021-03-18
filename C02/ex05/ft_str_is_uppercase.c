/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:58:06 by chahan            #+#    #+#             */
/*   Updated: 2021/02/23 14:19:12 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if (!(str[index] >= 'A' && str[index] <= 'Z'))
			return (0);
		index++;
	}
	return (1);
}
