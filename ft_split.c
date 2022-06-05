/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 21:37:48 by wting             #+#    #+#             */
/*   Updated: 2022/06/05 22:52:59 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countlen(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s != c && *s)
	{
		++count;
		++s;
	}
	return (count);
}

static int	getwords(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s == c)
		++s;
	while (*s)
	{
		if (*s != c)
		{
			++count;
			while (*s && *s != c)
				++s;
		}
		++s;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**a;
	static int	i = 0;
	int			j;
	int			len;

	if (!s)
		return (NULL);
	a = malloc(sizeof(char *) * (getwords(s, c) + 1));
	if (!a)
		return (NULL);
	while (*s)
	{
		if (countlen(s, c) != 0)
		{
			a[i] = ft_substr(s, 0, countlen(s, c));
			j = 0;
			len = countlen(s, c);
			while (j++ < len && *s)
				++s;
			++i;
		}
		++s;
	}
	a[i] = 0;
	return (a);
}
