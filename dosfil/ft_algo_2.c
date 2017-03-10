/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrakows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 15:30:21 by mkrakows          #+#    #+#             */
/*   Updated: 2017/02/27 15:34:31 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			size_min_map(int nb)
{
	int		i;

	i = 0;
	nb *= 4;
	while (i * i < nb)
		i++;
	return (i);
}

char		**gen_map(int nb)
{
	int		i;
	int		j;
	char	**map;

	i = 0;
	j = 0;
	map = malloc(sizeof(char *) * nb + 1);
	while (i != nb)
		map[i++] = malloc(sizeof(char) * nb + 1);
	i = 0;
	while (i != nb)
	{
		while (j != nb)
		{
			map[i][j] = '.';
			j++;
		}
		map[i][j] = '\0';
		j = 0;
		i++;
	}
	map[i] = NULL;
	return (map);
}

int			test_mino(t_mino *first, char **map, int size, t_xy s)
{
	int		i;
	int		j;

	i = first->p0[0];
	j = first->p0[1];
	if ((map[s.x][s.y] < 'A' || map[s.x][s.y] > 'Z') &&
			first->p1[0] - i + s.x >= 0 &&
			first->p1[1] - j + s.y >= 0 && first->p1[0] - i + s.x < size
			&& first->p1[1] - j + s.y < size
			&& first->p2[0] - i + s.x >= 0 && first->p2[1] - j + s.y >= 0
			&& first->p2[0] - i + s.x < size && first->p2[1] - j + s.y < size
			&& first->p3[0] - i + s.x >= 0 && first->p3[1] - j + s.y >= 0
			&& first->p3[0] - i + s.x < size && first->p3[1] - j + s.y < size
			&& (map[first->p1[0] - i + s.x][first->p1[1] - j + s.y] < 'A'
			|| map[first->p1[0] - i + s.x][first->p1[1] - j + s.y] > 'Z')
			&& (map[first->p2[0] - i + s.x][first->p2[1] - j + s.y] < 'A'
			|| map[first->p2[0] - i + s.x][first->p2[1] - j + s.y] > 'Z')
			&& (map[first->p3[0] - i + s.x][first->p3[1] - j + s.y] < 'A'
			|| map[first->p3[0] - i + s.x][first->p3[1] - j + s.y] > 'Z'))
		return (1);
	return (0);
}

char		**place_mino(t_mino *first, char **map, int x, int y)
{
	int			i;
	int			j;
	static char	a = 'A';

	i = first->p0[0];
	j = first->p0[1];
	map[x][y] = first->car;
	map[first->p1[0] - i + x][first->p1[1] - j + y] = first->car;
	map[first->p2[0] - i + x][first->p2[1] - j + y] = first->car;
	map[first->p3[0] - i + x][first->p3[1] - j + y] = first->car;
	a++;
	return (map);
}

char		**del_mino(t_mino *first, char **map, int x, int y)
{
	int		i;
	int		j;

	i = first->p0[0];
	j = first->p0[1];
	map[x][y] = '.';
	map[first->p1[0] - i + x][first->p1[1] - j + y] = '.';
	map[first->p2[0] - i + x][first->p2[1] - j + y] = '.';
	map[first->p3[0] - i + x][first->p3[1] - j + y] = '.';
	return (map);
}
