/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daewkim <daewkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 12:37:39 by daewkim           #+#    #+#             */
/*   Updated: 2021/02/21 12:40:30 by daewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_col(int x, char *pat)
{
	int j;

	j = 0;
	while (j < x)
	{
		if (j == 0)
		{
			ft_putchar(pat[0]);
		}
		else if (j == x - 1)
		{
			ft_putchar(pat[1]);
		}
		else
		{
			ft_putchar(pat[2]);
		}
		j++;
	}
	ft_putchar('\n');
}

void	print_row(int x, int y, char *pat)
{
	int i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
		{
			print_col(x, pat);
		}
		else if (i == y - 1)
		{
			print_col(x, pat + 6);
		}
		else
		{
			print_col(x, pat + 3);
		}
		i++;
	}
}

void	rush(int x, int y)
{
	print_row(x, y, "AABBB CCB");
}
