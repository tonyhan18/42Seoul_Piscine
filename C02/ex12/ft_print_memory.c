/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 19:40:35 by chahan            #+#    #+#             */
/*   Updated: 2021/03/09 13:31:14 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*g_hex;
char	g_str[16];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_addr(long long addr, int len)
{
	if (!addr)
	{
		while (len < 16)
		{
			ft_putchar('0');
			len++;
		}
		return ;
	}
	print_addr(addr / 16, len + 1);
	ft_putchar(g_hex[addr % 16]);
}

void	go(unsigned char *addr, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		if (i % 2 == 0)
			ft_putchar(' ');
		if (' ' <= addr[i] && addr[i] <= '~')
			g_str[i] = addr[i];
		else
			g_str[i] = '.';
		ft_putchar(g_hex[(int)addr[i] / 16]);
		ft_putchar(g_hex[(int)addr[i] % 16]);
		i++;
	}
	while (i < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ');
		write(1, "  ", 2);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				len;
	unsigned char	*ptr;

	i = 0;
	g_hex = "0123456789abcdef";
	while (size)
	{
		if (size / 16)
			len = 16;
		else
			len = size;
		ptr = (unsigned char*)addr + i;
		print_addr((long long)ptr, 0);
		write(1, ":", 1);
		go(ptr, len);
		write(1, " ", 1);
		write(1, g_str, len);
		ft_putchar('\n');
		size -= len;
		i += 16;
	}
	return (addr);
}
