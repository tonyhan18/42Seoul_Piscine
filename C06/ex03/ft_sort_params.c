/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 14:09:13 by chahan            #+#    #+#             */
/*   Updated: 2021/03/15 17:33:07 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		str_cmp(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	ascii_sort(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i++ < argc)
	{
		j = 1;
		while (++j < argc)
		{
			if (str_cmp(argv[j - 1], argv[j]) > 0)
			{
				tmp = argv[j - 1];
				argv[j - 1] = argv[j];
				argv[j] = tmp;
			}
		}
	}
}

int		main(int argc, char *argv[])
{
	int		i;

	ascii_sort(argc, argv);
	i = 0;
	while (++i < argc)
	{
		while (*argv[i])
			write(1, argv[i]++, 1);
		write(1, "\n", 1);
	}
}
