/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 19:27:09 by skherif           #+#    #+#             */
/*   Updated: 2017/02/27 15:33:59 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void				write_error(char *error)
{
	write(1, error, ft_strlen(error));
	exit(-1);
}

void				check_flag(int flag1, int flag2)
{
	if (flag1 != 4)
		write_error("error\n");
	if (flag2 != 21)
		write_error("error\n");
}

void				check_final_car(char *str, int i)
{
	if (str[i - 1] != '\n')
		write_error("error\n");
	if (str[i - 2] == '\n' && str[i - 1] == '\n')
		write_error("error\n");
}

void				check_car(char *str)
{
	int		i;
	int		flag1;
	int		flag2;

	flag1 = 0;
	flag2 = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == '#')
			flag1++;
		flag2++;
		if (str[i] == '\n' && str[i - 1] == '\n')
			flag2--;
		if ((str[i] == '\n' && str[i - 1] == '\n') ||
			(str[i] == '\n' && str[i + 1] == '\0'))
		{
			check_flag(flag1, flag2);
			flag2 = 1;
			flag1 = 0;
		}
		if (str[i] != '.' && str[i] != '\n' && str[i] != '#' && str[i] != '\0')
			write_error("error\n");
		i++;
	}
}

void				check_error(char *str)
{
	char	**map;
	int		x;

	x = 0;
	check_car(str);
	check_final_car(str, ft_strlen(str));
	map = ft_strsplit(str, '\n');
	check_link(map);
}
