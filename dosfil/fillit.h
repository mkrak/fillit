/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 12:18:13 by skherif           #+#    #+#             */
/*   Updated: 2017/03/02 19:56:54 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct		s_mino
{
	int				p0[2];
	int				p1[2];
	int				p2[2];
	int				p3[2];
	char			car;
	struct s_mino	*next;
}					t_mino;

typedef struct		s_xy
{
	int	x;
	int y;
}					t_xy;

void				ft_algo(t_mino *first, int nb_mino);
void				affiche_map(char **map);
int					nb_mino(t_mino *first);
t_mino				*stock_it(char **map);
void				ftw(t_mino *second, int *res, int x, int y);
t_mino				*creat_mino(t_mino *first);
int					size_min_map(int nb);
char				**gen_map(int nb);
int					test_mino(t_mino *first, char **map, int size, t_xy s);
char				**place_mino(t_mino *first, char **map, int x, int y);
char				**del_mino(t_mino *first, char **map, int x, int y);
int					mapping(t_mino *first, char **map, int size);
void				check_link(char **map);
int					nb_link(char **map, int x, int y);
void				check_error(char *str);
void				check_car(char *str);
void				check_final_car(char *str, int i);
void				check_flag(int flag1, int flag2);
void				write_error(char *error);
void				do_it(char *buffer);

#endif
