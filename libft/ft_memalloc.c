/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 15:50:04 by skherif           #+#    #+#             */
/*   Updated: 2016/11/19 15:50:16 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memalloc(size_t size)
{
	void	*test;
	int		i;

	i = 0;
	test = malloc(size);
	if (test == NULL)
		return (NULL);
	ft_bzero(test, size);
	return (test);
}
