/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 00:10:16 by chahan            #+#    #+#             */
/*   Updated: 2021/02/22 18:25:12 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar_g(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb_g(int a, int b, bool last)
{
	ft_putchar_g('0' + a / 10);
	ft_putchar_g('0' + a % 10);
	ft_putchar_g(' ');
	ft_putchar_g('0' + b / 10);
	ft_putchar_g('0' + b % 10);
	if (!last)
	{
		ft_putchar_g(',');
		ft_putchar_g(' ');
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	bool	last;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			last = (a == 98 && b == 99);
			ft_print_comb_g(a, b, last);
			b += 1;
		}
		a += 1;
	}
}
