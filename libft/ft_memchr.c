/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 15:51:11 by skherif           #+#    #+#             */
/*   Updated: 2016/11/19 15:51:12 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	car;
	int				i;

	tmp = (unsigned char *)s;
	car = (unsigned char)c;
	i = 0;
	while (n--)
	{
		if (tmp[i] == car)
		{
			return (&tmp[i]);
		}
		i++;
	}
	return (NULL);
}
