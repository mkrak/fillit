/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:05:04 by skherif           #+#    #+#             */
/*   Updated: 2016/11/19 16:05:18 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*to_ret;
	int			i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	to_ret = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (to_ret == NULL)
		return (NULL);
	while (s[i])
	{
		to_ret[i] = (*f)(i, s[i]);
		i++;
	}
	to_ret[i] = '\0';
	return (to_ret);
}
