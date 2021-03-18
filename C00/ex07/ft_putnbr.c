/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 23:27:14 by chahan            #+#    #+#             */
/*   Updated: 2021/02/23 15:57:58 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rec(int nb)
{
	char	ch;

	if (nb == 0)
	{
		return ;
	}
	rec(nb / 10);
	ch = '0' + nb % 10;
	write(1, &ch, 1);
}

void	ft_putnbr(int nb)
{
	char ch;

	if (nb < 0)
	{
		write(1, "-", 1);
		rec(-(nb/10));
		ch = '0' - nb % 10;
	}
	else
	{
		rec(nb);
		ch = '0' + nb % 10;
	}
	write(1, &ch, 1);
}
