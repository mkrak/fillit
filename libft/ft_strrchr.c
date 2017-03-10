/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:13:05 by skherif           #+#    #+#             */
/*   Updated: 2016/11/19 16:13:07 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	tmp = NULL;
	i = 0;
	while (i != (int)ft_strlen(s) + 1)
	{
		if (s[i] == c)
			tmp = (char *)&s[i];
		i++;
	}
	return (tmp);
}
