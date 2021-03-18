/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 18:44:02 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/06 20:57:11 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_con[16];
extern int g_mov[4][2];
extern int *g_start_pos[4];
extern int g_map[5][5];

int	pov_input(char *list)
{
	int a;

	a = 0;
	while (*list != 0)
	{
		if (*list < '1' || *list > '4')
		{
			return (0);
		}
		g_con[a++] = *list - '0';
		if (*(++list) != ' ')
		{
			if (*list == 0)
			{
				break ;
			}
			return (0);
		}
		++list;
	}
	if (*(list - 1) == ' ' || a != 16)
	{
		return (0);
	}
	return (1);
}

int	chk_board_detail(int *start, int mov, int con)
{
	int cnt;
	int a;
	int large;

	cnt = 0;
	a = 0;
	large = 0;
	while (a++ < 4)
	{
		if (*start > large)
		{
			large = *start;
			++cnt;
		}
		start += mov;
	}
	if (con != cnt)
	{
		return (0);
	}
	return (1);
}

int	chk_board(void)
{
	int con;
	int *start;
	int a;
	int b;

	con = 0;
	a = 0;
	while (a < 4)
	{
		b = 0;
		start = g_start_pos[a];
		while (b < 4)
		{
			if (chk_board_detail(start, g_mov[a][0], g_con[con++]) == 0)
			{
				return (0);
			}
			start += g_mov[a][1];
			++b;
		}
		++a;
	}
	return (1);
}
