/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 21:47:11 by wting             #+#    #+#             */
/*   Updated: 2022/05/26 21:52:08 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (s[i] && i > 0)
	{
		if (*s == (unsigned char)c)
			return (s);
		--i;
	}
	return (NULL);
}
