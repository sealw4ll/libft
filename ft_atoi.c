/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:10:38 by wting             #+#    #+#             */
/*   Updated: 2022/06/04 12:58:20 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		neg;
	long	total;

	total = 0;
	neg = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg *= -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		total = (total * 10) + (*str - '0');
		++str;
		if (total != (total * 2) / 2 && neg == 1)
			return (-1);
		if (total != (total * 2) / 2 && neg == -1)
			return (0);
	}
	return ((int)(neg * total));
}
