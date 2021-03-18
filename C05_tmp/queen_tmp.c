/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queen_puzzle.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:16:45 by chahan            #+#    #+#             */
/*   Updated: 2021/03/14 20:16:51 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_queen[10];
int		g_cnt;

void	ft_putchar(int num)
{
	char	c;

	c = '0' + num;
	write(1, &c, 1);
}

int		check(int cur)
{
	int		other;
	int		diff;

	other = 0;
	while (other < cur)
	{
		diff = g_queen[cur] - g_queen[other];
		if (diff < 0)
			diff *= -1;
		if (g_queen[other] == g_queen[cur] || cur - other == diff)
			return (0);
		other++;
	}
	return (1);
}

void	rec_queen(int n)
{
	int		i;

	if (n == 10)
	{
		i = 0;
		while (i < 10)
			ft_putchar(g_queen[i++]);
		write(1, "\n", 1);
		g_cnt++;
		return ;
	}
	else
	{
		i = 0;
		while (i < 10)
		{
			g_queen[n] = i;
			if (check(n))
				rec_queen(n + 1);
			i++;
		}
	}
}

int		ft_ten_queen_puzzle(void)
{
	g_cnt = 0;
	rec_queen(0);
	return (g_cnt);
}
