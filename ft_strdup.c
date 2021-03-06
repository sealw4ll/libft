/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:57:47 by wting             #+#    #+#             */
/*   Updated: 2022/06/02 22:35:15 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*a;
	int		i;

	i = 0;
	a = malloc(ft_strlen(s1) + 1);
	if (!a)
		return (0);
	while (s1[i])
	{
		a[i] = s1[i];
		++i;
	}
	a[i] = '\0';
	return (a);
}
