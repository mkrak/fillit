/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wtf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 19:27:09 by skherif           #+#    #+#             */
/*   Updated: 2017/02/27 15:33:21 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_mino				*creat_mino(t_mino *first)
{
	t_mino			*mino;
	t_mino			*tmp;
	static char		c = 'A';

	mino = malloc(sizeof(t_mino));
	mino->car = c;
	c++;
	mino->next = NULL;
	if (!first)
		return (mino);
	tmp = first;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = mino;
	return (mino);
}

void				ftw(t_mino *second, int *res, int x, int y)
{
	if (*res == 0)
	{
		second->p0[0] = x % 4;
		second->p0[1] = y;
	}
	if (*res == 1)
	{
		second->p1[0] = x % 4;
		second->p1[1] = y;
	}
	if (*res == 2)
	{
		second->p2[0] = x % 4;
		second->p2[1] = y;
	}
	if (*res == 3)
	{
		second->p3[0] = x % 4;
		second->p3[1] = y;
		*res = -1;
	}
	*res += 1;
}

t_mino				*stock_it(char **map)
{
	int			x;
	int			y;
	int			res;
	t_mino		*first;
	t_mino		*second;

	res = 0;
	x = 0;
	y = 0;
	first = creat_mino(NULL);
	second = first;
	while (map[x])
	{
		while (y != 4)
		{
			if (map[x][y] == '#')
				ftw(second, &res, x, y);
			y++;
		}
		y = 0;
		if (((x + 1) % 4) == 0 && x != 0)
			second = creat_mino(first);
		x++;
	}
	return (first);
}

int					nb_mino(t_mino *first)
{
	t_mino			*tmp;
	int				i;

	i = 0;
	tmp = first;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i - 1);
}

int					main(int ac, char **av)
{
	int				i;
	char			c;
	char			*buffer;
	int				fd;

	i = 0;
	buffer = malloc(4096);
	if (ac != 2)
		write_error("Usage:   ./fillit [name of map]\n");
	if ((fd = open(av[1], O_RDONLY)) == -1)
		write_error("error\n");
	while (read(fd, &c, 1) > 0)
		buffer[i++] = c;
	do_it(buffer);
}
