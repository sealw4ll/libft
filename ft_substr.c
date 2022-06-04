/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:23:26 by wting             #+#    #+#             */
/*   Updated: 2022/06/04 16:58:17 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	a = malloc(len + 1);
	if (!a)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (i < len)
		{
			a[i] = s[start + i];
			++i;
		}
	}
	a[i] = '\0';
	return (a);
}
