/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:12:56 by chahan            #+#    #+#             */
/*   Updated: 2021/02/23 19:53:11 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_printable(unsigned char c)
{
	if (c >= ' ' && c <= '~')
		return (0);
	return (1);
}

void	write_hex(unsigned char c)
{
	c = c + '0';
	if (c > '9')
		c += 39;
	write(1, &c, 1);
}

void	print_hex(unsigned char c)
{
	write(1, "\\", 1);
	write_hex((int)c / 16);
	write_hex((int)c % 16);
}

void	ft_putstr_non_printable(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if (is_printable(str[index]))
			print_hex(str[index]);
		else
			write(1, &str[index], 1);
		index++;
	}
}
