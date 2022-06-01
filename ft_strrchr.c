/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 21:47:11 by wting             #+#    #+#             */
/*   Updated: 2022/06/01 19:29:56 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int j;

	j = 0;
	i = ft_strlen(s);
	while (j < i)
	{
		++s;
		++j;
	}
	while (j >= 0)
	{
		if (*s == c)
			return((char *)s);
		--s;
		--j;
	}
	return (NULL);
}
