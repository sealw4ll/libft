#include <stdio.h>
#include <ctype.h>	
#include "libft.h"

int main(void)
{
	char b[20] = "abbbbbbbbbbbbb";
    // char a[100] = "test";
	printf("%s\n", strrchr(b, 'c'));
	printf("%s\n", ft_strrchr(b, 'c'));
}
