/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 09:58:14 by wting             #+#    #+#             */
/*   Updated: 2022/05/31 13:25:46 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0; 
	while (haystack && i < len)
	{
		if (haystack == needle)
		{
			if (ft_strncmp(haystack, needle, len - i) == 0)
				return ((char *)haystack);
		}
		++haystack;
		++needle;
		++i;
	}
	return (NULL);
}
