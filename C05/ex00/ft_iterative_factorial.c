/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 13:00:40 by chahan            #+#    #+#             */
/*   Updated: 2021/03/07 13:06:57 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ans;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	ans = 1;
	while(nb)
		ans *= (nb--);
	return (ans);
}

int	main(void)
{
	printf("%d\n",ft_iterative_factorial(-1));
	printf("%d\n",ft_iterative_factorial(3));
	printf("%d\n",ft_iterative_factorial(4));
	printf("%d\n",ft_iterative_factorial(0));
	printf("%d\n",ft_iterative_factorial(10));
}
