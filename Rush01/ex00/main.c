/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 18:45:09 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/06 18:45:11 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		*g_start_pos[4];
int		g_mov[4][2];

int		pov_input(char *list);
void	rush(void);

int		main(int argc, char *argv[])
{
	if (argc != 2 || pov_input(argv[1]) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	rush();
}
