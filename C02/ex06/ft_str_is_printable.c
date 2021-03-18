/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:37:19 by chahan            #+#    #+#             */
/*   Updated: 2021/02/23 14:44:31 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if (!(str[index] >= ' ' && str[index] <= '~'))
			return (0);
		index++;
	}
	return (1);
}
