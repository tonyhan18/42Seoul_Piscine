/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:36:19 by chahan            #+#    #+#             */
/*   Updated: 2021/03/06 16:25:25 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_map[5][5];
int		g_col[5][5];
int		g_row[5][5];

int		chk_board(void);
int		run_board(int r, int c);

void	print_board(void)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (++i < 5)
	{
		j = 0;
		while (++j < 5)
		{
			c = g_map[i][j] + '0';
			write(1, &c, 1);
			if (j < 4)
			{
				write(1, " ", 1);
			}
		}
		write(1, "\n", 1);
	}
}

int		run_board_detail(int r, int c)
{
	int		val;

	val = 0;
	while (++val < 5)
	{
		if (g_row[r][val] || g_col[c][val])
		{
			continue ;
		}
		g_row[r][val] = 1;
		g_col[c][val] = 1;
		g_map[r][c] = val;
		if (run_board(r, c + 1))
		{
			return (1);
		}
		g_row[r][val] = 0;
		g_col[c][val] = 0;
	}
	return (0);
}

int		run_board(int r, int c)
{
	if (r == 5)
	{
		if (chk_board())
		{
			print_board();
			return (1);
		}
		return (0);
	}
	if (c == 5)
	{
		return (run_board(r + 1, 1));
	}
	else
	{
		return (run_board_detail(r, c));
	}
}

void	rush(void)
{
	if (!run_board(1, 1))
	{
		write(1, "Error\n", 6);
	}
}
