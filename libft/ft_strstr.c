/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:14:59 by skherif           #+#    #+#             */
/*   Updated: 2016/11/19 16:15:00 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *here, const char *tofind)
{
	int		i;
	int		j;
	int		y;

	i = 0;
	j = 0;
	y = 0;
	if (ft_strlen(tofind) == 0)
		return ((char *)here);
	while (here[i])
	{
		j = i;
		while (here[j] == tofind[y])
		{
			if (y == (int)ft_strlen(tofind) - 1)
				return ((char *)here + i);
			j++;
			y++;
		}
		y = 0;
		i++;
	}
	return (0);
}
