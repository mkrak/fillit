/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 16:38:34 by skherif           #+#    #+#             */
/*   Updated: 2016/11/22 16:38:35 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putendl(char const *s)
{
	int		i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
		ft_putchar(s[i++]);
	ft_putchar('\n');
}
