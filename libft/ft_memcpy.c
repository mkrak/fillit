/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 15:52:19 by skherif           #+#    #+#             */
/*   Updated: 2016/11/19 15:55:00 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void			*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t		i;
	char		*dst;
	char		*sc;

	dst = (char *)dest;
	sc = (char *)src;
	if (dest == src || n == 0)
		return (dest);
	i = 0;
	while (--n)
	{
		*dst++ = *sc++;
		i++;
	}
	*dst = *sc;
	return (dest);
}
