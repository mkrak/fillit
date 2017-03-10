/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:16:20 by skherif           #+#    #+#             */
/*   Updated: 2016/11/19 16:16:21 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		minansmax(char const *s, int *i, int *j)
{
	*j = ft_strlen(s);
	while (s[*j - 1] == ' ' || s[*j - 1] == '\n' || s[*j - 1] == '\t')
	{
		*j = *j - 1;
	}
	if (*j <= 0)
		*j = 0;
	while (s[*i] == ' ' || s[*i] == '\n' || s[*i] == '\t')
	{
		*i = *i + 1;
	}
}

char			*ft_strtrim(char const *s)
{
	char		*new;
	int			i;
	int			j;
	int			x;

	x = 0;
	i = 0;
	if (!s)
		return (NULL);
	minansmax(s, &i, &j);
	new = malloc(sizeof(char) * (j - i) + 1);
	if (j <= i)
		return (ft_strdup(""));
	if (new == NULL)
		return (NULL);
	while (i < j)
	{
		new[x] = s[i];
		i++;
		x++;
	}
	new[x] = '\0';
	return (new);
}
