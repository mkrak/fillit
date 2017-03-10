/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrakows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 15:30:21 by mkrakows          #+#    #+#             */
/*   Updated: 2017/03/02 19:56:14 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			mapping(t_mino *first, char **map, int size)
{
	t_xy		s;
	t_mino		*tmp;

	tmp = first;
	if (first->next == NULL)
	{
		affiche_map(map);
		return (1);
	}
	s.x = -1;
	while (map[++s.x])
	{
		s.y = -1;
		while (map[s.x][++s.y])
			if (test_mino(tmp, map, size, s))
			{
				place_mino(tmp, map, s.x, s.y);
				if (mapping(first->next, map, size))
					return (1);
				else
					del_mino(tmp, map, s.x, s.y);
			}
	}
	return (0);
}

void		affiche_map(char **map)
{
	int i;

	i = 0;
	while (map[i])
	{
		ft_putendl(map[i]);
		i++;
	}
}

void		ft_algo(t_mino *first, int nb_mino)
{
	char	**map;
	int		size_map;

	size_map = size_min_map(nb_mino);
	map = gen_map(size_map);
	while (!mapping(first, map, size_map))
	{
		size_map++;
		free(map);
		map = gen_map(size_map);
	}
}
