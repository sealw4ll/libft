/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:56:14 by wting             #+#    #+#             */
/*   Updated: 2022/06/05 15:52:35 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>	
#include "libft.h"

int	main(void)
{
	char	**a = ft_split("      split       this for   me  !       ", ' ');
	int i = -1;
	while(a[++i])
		printf("%s\n", a[i]);
	while (a[--i])
		free(a[i]);
	free (a);
}
