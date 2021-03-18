/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:10:39 by chahan            #+#    #+#             */
/*   Updated: 2021/03/11 14:37:17 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_len;
char	*g_base;

void	ft_putchar4(int nbr)
{
	if (!nbr)
		return ;
	ft_putchar4(nbr / g_len);
	write(1, &g_base[nbr % g_len], 1);
}

int		check_base4(void)
{
	int		check[256];
	int		i;

	i = 0;
	while (i < 256)
		check[i++] = 0;
	g_len = 0;
	while (g_base[g_len])
	{
		if (check[(int)g_base[g_len]]
				|| g_base[g_len] == '+'
				|| g_base[g_len] == '-')
			return (0);
		check[(int)g_base[g_len]] = 1;
		g_len++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	tmp;

	g_base = base;
	if (!check_base4() || g_len == 0 || g_len == 1)
		return ;
	tmp = nbr;
	if (tmp < 0)
	{
		write(1, "-", 1);
		tmp *= -1;
	}
	ft_putchar4(tmp / g_len);
	write(1, &g_base[tmp % g_len], 1);
}
