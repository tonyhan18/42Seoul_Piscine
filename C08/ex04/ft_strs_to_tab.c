/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 21:57:33 by chahan            #+#    #+#             */
/*   Updated: 2021/03/18 00:42:07 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

void					str_cpy(char *dest, char *src)
{
	while (*src)
		*(dest++) = *(src++);
	dest = 0;
}

int						get_str_len(char *av)
{
	int		i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*str;

	str = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!str)
		return (0);
	i = 0;
	while (i < ac)
	{
		str[i].size = get_str_len(av[i]);
		str[i].str = (char*)malloc(str[i].size + 1);
		str[i].copy = (char*)malloc(str[i].size + 1);
		str_cpy(str[i].str, av[i]);
		str_cpy(str[i].copy, av[i]);
		i++;
	}
	str[i].str = 0;
	return (str);
}
