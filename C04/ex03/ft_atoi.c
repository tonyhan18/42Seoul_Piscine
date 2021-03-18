/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:55:46 by chahan            #+#    #+#             */
/*   Updated: 2021/03/11 13:19:16 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int		cnt;
	int		num;

	while (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	cnt = 0;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			cnt++;
		str++;
	}
	num = 0;
	while ('0' <= *str && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (cnt % 2 == 1)
		num *= -1;
	return (num);
}
