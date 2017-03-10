/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 15:44:46 by skherif           #+#    #+#             */
/*   Updated: 2016/11/19 15:44:48 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *nptr)
{
	int		res;
	int		isneg;
	int		i;

	i = 0;
	res = 0;
	isneg = 0;
	while ((nptr[i] == '\n') || (nptr[i] == '\t') || (nptr[i] == '\v') ||
			(nptr[i] == ' ') || (nptr[i] == '\f') || (nptr[i] == '\r'))
		nptr++;
	if (nptr[i] == '+')
		nptr++;
	else if (nptr[i] == '-')
	{
		isneg = 1;
		nptr++;
	}
	while ((nptr[i] <= '9') && (nptr[i] >= '0'))
	{
		res = (res * 10) - (nptr[i] - '0');
		nptr++;
	}
	if (!isneg)
		res = -res;
	return (res);
}
