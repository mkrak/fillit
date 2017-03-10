/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:00:06 by skherif           #+#    #+#             */
/*   Updated: 2016/11/19 16:00:32 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*to_res;
	int		i;

	i = 0;
	to_res = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (to_res == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		to_res[i] = s[i];
		i++;
	}
	to_res[i] = '\0';
	return (to_res);
}
