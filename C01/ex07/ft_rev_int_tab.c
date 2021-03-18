/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 21:12:30 by chahan            #+#    #+#             */
/*   Updated: 2021/02/22 21:32:54 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap7(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		low;
	int		high;

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		swap7(&tab[low], &tab[high]);
		low++;
		high--;
	}
}
