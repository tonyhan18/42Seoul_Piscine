/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 13:36:53 by chahan            #+#    #+#             */
/*   Updated: 2021/03/15 20:04:42 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime(int nb)
{
	int		i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (!(nb % 2 && nb % 3))
		return (0);
	i = 5;
	while (i <= nb / 2)
	{
		if (!(nb % i && nb % (i + 2)))
			return (0);
		i += 6;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int		ans;

	ans = nb;
	while (!is_prime(ans))
		ans++;
	return (ans);
}
