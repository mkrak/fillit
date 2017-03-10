/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 15:58:16 by skherif           #+#    #+#             */
/*   Updated: 2016/11/19 15:58:17 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	tmp = NULL;
	i = 0;
	while (i != (int)ft_strlen(s) + 1)
	{
		if (s[i] == c)
		{
			tmp = (char *)&s[i];
			return (tmp);
		}
		i++;
	}
	return (NULL);
}
