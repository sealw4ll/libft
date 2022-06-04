/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 21:37:48 by wting             #+#    #+#             */
/*   Updated: 2022/06/04 21:49:19 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	getwords(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s == c)
		++s;
	while (*s)
	{
		if (*s == c)
			++count;
		while (*s == c)
			++s;
	
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char **a;

	a = malloc(sizeof(char) * (getwords(s, c) + 1));
}