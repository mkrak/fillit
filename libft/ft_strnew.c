/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:09:58 by skherif           #+#    #+#             */
/*   Updated: 2016/11/19 16:10:00 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnew(size_t size)
{
	char	*to_ret;
	int		i;

	i = 0;
	to_ret = malloc(sizeof(char) * (size + 1));
	if (to_ret == NULL)
		return (NULL);
	while (to_ret[i])
	{
		to_ret[i] = '\0';
		i++;
	}
	return (to_ret);
}
