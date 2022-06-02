/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 09:58:14 by wting             #+#    #+#             */
/*   Updated: 2022/06/02 21:54:56 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*haystack)
		return (0);
	if (*needle == 0 || len == 0)
		return ((char *)haystack);
	while (haystack && len)
	{
		if (*haystack == *needle)
		{
			if (ft_strlen(needle) <= len)
			{
				if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
					return ((char *)haystack);
			}
		}
		++haystack;
		--len;
	}
	return (NULL);
}
