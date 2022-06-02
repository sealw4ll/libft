/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:34:03 by wting             #+#    #+#             */
/*   Updated: 2022/06/02 21:54:18 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(dst);
	if (dstsize < l)
		return (dstsize + ft_strlen(src));
	while (i < dstsize - l - 1 && src[i])
	{
		dst[i + l] = src[i];
		++i;
	}
	dst[i + l] = '\0';
	return (l + ft_strlen(src));
}
