/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 19:27:09 by skherif           #+#    #+#             */
/*   Updated: 2017/02/27 15:33:06 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int					nb_link(char **map, int x, int y)
{
	int		to_ret;

	to_ret = 0;
	if (x - 1 >= 0)
		if (map[x - 1][y] == '#')
			to_ret++;
	if (map[x + 1])
		if (map[x + 1][y] == '#')
			to_ret++;
	if (map[x][y - 1])
		if (map[x][y - 1] == '#')
			to_ret++;
	if (map[x][y + 1])
		if (map[x][y + 1] == '#')
			to_ret++;
	return (to_ret);
}

void				ret_zero(int *res)
{
	*res = 0;
}

void				check_link(char **map)
{
	int		x;
	int		y;
	int		res;
	int		flag3;

	res = 0;
	x = 0;
	y = 0;
	flag3 = 1;
	while (map[x])
	{
		while (map[x][y])
		{
			if (map[x][y] == '#')
				res += nb_link(map, x, y);
			y++;
		}
		if (flag3 % 4 == 0)
			(res < 6) ? write_error("error\n") : ret_zero(&res);
		flag3++;
		y = 0;
		x++;
	}
}
