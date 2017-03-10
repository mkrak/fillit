/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wtf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 19:27:09 by skherif           #+#    #+#             */
/*   Updated: 2017/03/02 19:56:35 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void				do_it(char *buffer)
{
	t_mino			*first;
	char			**to_test1;

	check_error(buffer);
	to_test1 = ft_strsplit(buffer, '\n');
	first = stock_it(to_test1);
	ft_algo(first, nb_mino(first));
}
