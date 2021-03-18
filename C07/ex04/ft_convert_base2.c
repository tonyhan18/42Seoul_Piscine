/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chahan <hgdst14@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:17:55 by chahan            #+#    #+#             */
/*   Updated: 2021/03/16 14:26:24 by chahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_whitespace(char c)
{
	return (c == ' ' || ('\t' <= c && c <= '\r'));
}

int		is_valid(char *base, int *len)
{
	int		chk[256];
	int		i;
	char	c;

	i = 0;
	while (i < 256)
		chk[i++] = 0;
	*len = 0;
	while (base[*len])
	{
		c = base[*len];
		if (chk[(int)c] || c == '+' || c == '-'
				|| c == ' ' || ('\t' <= c && c <= '\r'))
			return (0);
		chk[(int)c] = 1;
		++(*len);
	}
	if (*len <= 1)
		return (0);
	return (1);
}

int		ft_strlen(long long nbr, int base_len)
{
	int		ans;

	if (!nbr)
		return (1);
	ans = 0;
	if (nbr < 0)
		++ans;
	while (nbr)
	{
		nbr /= base_len;
		++ans;
	}
	return (ans);
}
