/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 21:14:59 by chahan            #+#    #+#             */
/*   Updated: 2021/03/11 21:07:08 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*find_tmp;
	char	*str_tmp;

	if (!*to_find)
		return (str);
	while (*str)
	{
		find_tmp = to_find;
		str_tmp = str;
		while (*str_tmp && *find_tmp == *str_tmp)
		{
			find_tmp++;
			str_tmp++;
		}
		if (!(*find_tmp))
			return (str);
		str++;
	}
	return (0);
}
