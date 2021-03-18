/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 19:01:26 by chahan            #+#    #+#             */
/*   Updated: 2021/02/25 19:07:28 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int ans;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	ans = nb;
	while (--power)
		ans *= nb;
	return (ans);
}
