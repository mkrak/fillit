/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:10:08 by skherif           #+#    #+#             */
/*   Updated: 2016/11/19 16:10:09 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *here, const char *tofind, size_t len)
{
	int		i;
	int		j;
	int		y;

	i = 0;
	j = 0;
	y = 0;
	if (ft_strlen(tofind) == 0)
		return ((char *)here);
	if (len == 0)
		return (NULL);
	while (here[i] != '\0' && (i + ft_strlen(tofind) <= len))
	{
		if (ft_strncmp(here + i, tofind, ft_strlen(tofind)) == 0)
			return ((char *)here + i);
		i++;
	}
	return (NULL);
}
