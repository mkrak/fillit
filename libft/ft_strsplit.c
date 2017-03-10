/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:13:16 by skherif           #+#    #+#             */
/*   Updated: 2016/11/19 16:13:17 by skherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			count_word(const char *s, char c)
{
	int		res;
	int		flag;
	int		i;

	i = 0;
	res = 0;
	flag = 0;
	while (s[i] != '\0')
	{
		if (flag == 1 && s[i] == c)
			flag = 0;
		if (flag == 0 && s[i] != c)
		{
			flag = 1;
			res++;
		}
		i++;
	}
	return (res);
}

static int			count_len(const char *s, char c)
{
	int		res;
	int		i;

	i = 0;
	res = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		res++;
		i++;
	}
	return (res);
}

char				**ft_strsplit(const char *s, char c)
{
	char	**to_ret;
	int		words;
	int		i;
	int		x;

	i = 0;
	x = 0;
	if (!s)
		return (NULL);
	words = count_word(s, c);
	to_ret = malloc(sizeof(*to_ret) * (words + 1));
	if (to_ret == NULL)
		return (NULL);
	while (x != words)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		to_ret[x] = ft_strsub(&s[i], 0, count_len(&s[i], c));
		if (to_ret[x] == NULL)
			return (NULL);
		i = i + count_len(&s[i], c);
		x++;
	}
	to_ret[x] = NULL;
	return (to_ret);
}
