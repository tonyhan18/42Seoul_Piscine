/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 23:15:10 by chahan            #+#    #+#             */
/*   Updated: 2021/02/22 18:18:07 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char c;

	if (n >= 0)
	{
		c = 'P';
		write(1, &c, 1);
	}
	else
	{
		c = 'N';
		write(1, &c, 1);
	}
}