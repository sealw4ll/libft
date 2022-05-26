/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:34:03 by wting             #+#    #+#             */
/*   Updated: 2022/05/26 21:57:03 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	c;

	i = 0;
	c = ft_strlen(dst);
	while (i++ < dstsize && src)
		dst[c + i] = src[i];
	dst[c + i] = '\0';
	return (c + i);
}
