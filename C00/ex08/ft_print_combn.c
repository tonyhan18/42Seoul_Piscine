/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 16:23:14 by chahan            #+#    #+#             */
/*   Updated: 2021/02/23 15:44:23 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_len;
char	g_buf[10];

void	rec_i(int pre, int n)
{
	int		i;

	if (n == g_len)
	{
		write(1, g_buf, g_len);
		write(1, ", ", 2);
		return ;
	}
	if (pre >= 9)
	{
		return ;
	}
	i = pre;
	while (++i <= 10 - g_len + n)
	{
		g_buf[n] = '0' + i;
		rec_i(i, n + 1);
	}
}

void	print_last(int i)
{
	char	c;

	while (i <= 9)
	{
		c = '0' + i;
		write(1, &c, 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int		i;

	i = 0;
	g_len = n;
	while (i < 10 - n)
	{
		g_buf[0] = '0' + i;
		rec_i(i, 1);
		i++;
	}
	print_last(i);
}
