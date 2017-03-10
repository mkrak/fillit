/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 15:55:27 by skherif           #+#    #+#             */
/*   Updated: 2016/11/19 15:56:15 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;

	if ((tmp = (unsigned char*)malloc(sizeof(char) * n)) == NULL)
		return (NULL);
	ft_memcpy((void *)tmp, (void *)src, n);
	ft_memcpy(dest, tmp, n);
	free(tmp);
	return (dest);
}
