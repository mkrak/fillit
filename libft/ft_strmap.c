/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:04:22 by skherif           #+#    #+#             */
/*   Updated: 2016/11/19 16:04:54 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmap(char const *s, char (*f)(char))
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
		to_ret[i] = (*f)(s[i]);
		i++;
	}
	to_ret[i] = '\0';
	return (to_ret);
}
