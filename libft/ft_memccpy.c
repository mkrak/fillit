/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 15:50:37 by skherif           #+#    #+#             */
/*   Updated: 2016/11/19 15:50:58 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;
	unsigned char	car;
	unsigned int	i;

	i = 0;
	tmp = (unsigned char *)dest;
	tmp2 = (unsigned char *)src;
	car = (char)c;
	while (i < n)
	{
		if (*tmp2 == car)
		{
			*tmp++ = *tmp2++;
			return (tmp);
		}
		*tmp++ = *tmp2++;
		i++;
	}
	return (NULL);
}
