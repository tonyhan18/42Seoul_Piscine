/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 16:50:25 by chahan            #+#    #+#             */
/*   Updated: 2021/03/16 13:51:42 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_len;
char	*g_base;

int		check_base5(void)
{
	int		chk[256];
	int		i;

	i = 0;
	while (i < 256)
		chk[i++] = 0;
	g_len = 0;
	while (g_base[g_len])
	{
		if (chk[(int)g_base[g_len]] ||
				g_base[g_len] == '+' ||
				g_base[g_len] == '-' ||
				g_base[g_len] == ' ' ||
				('\t' <= g_base[g_len] && g_base[g_len] <= '\r'))
			return (0);
		chk[(int)g_base[g_len++]] = 1;
	}
	return (1);
}

int		ft_get_idx(char c)
{
	int		i;

	i = 0;
	while (i < g_len)
	{
		if (c == g_base[i])
			return (i);
		++i;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int		num;
	int		sign;
	int		idx;

	g_base = base;
	if (!check_base5() || g_len == 0 || g_len == 1)
		return (0);
	num = 0;
	sign = 1;
	while (('\t' <= *str && *str <= '\r') || *str == ' ')
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*(str++) == '-')
			sign *= -1;
	}
	while (*str)
	{
		idx = ft_get_idx(*(str++));
		if (idx == -1)
			break ;
		num *= g_len;
		num += (sign * idx);
	}
	return (num);
}
