#include <stdio.h>
#include <ctype.h>	
#include "libft.h"

int main(void)
{
	char b[100] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    char a[100] = "test";

	printf("%s\n", ft_memmove(b, a, 4));
	printf("%s\n", memmove(b, a, 4));
}
