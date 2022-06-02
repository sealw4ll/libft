/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:56:14 by wting             #+#    #+#             */
/*   Updated: 2022/06/02 22:07:35 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>	
#include "libft.h"

int main(void)
{
	char *str;
	char *tmp = "I malloc so I am.";

	str = ft_strdup(tmp);
	printf("%s\n", str);
}
