/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric_dev.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:58:06 by chahan            #+#    #+#             */
/*   Updated: 2021/02/23 14:14:16 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if (!(str[index] >= '0' && str[index] <= '9'))
			return (0);
		index++;
	}
	return (1);
}
