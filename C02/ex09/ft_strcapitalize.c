/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:48:22 by chahan            #+#    #+#             */
/*   Updated: 2021/03/09 20:21:28 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_number9(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		is_lower9(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		is_upper9(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		is_others9(char c)
{
	if (is_number9(c))
		return (1);
	if (is_lower9(c))
		return (1);
	if (is_upper9(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		index;
	int		flag;

	index = 0;
	flag = 1;
	while (str[index])
	{
		if (!is_others9(str[index]))
			flag = 1;
		else
		{
			if (flag && is_lower9(str[index]))
			{
				str[index] -= 32;
			}
			else if (!flag && is_upper9(str[index]))
				str[index] += 32;
			flag = 0;
		}
		index++;
	}
	return (str);
}
