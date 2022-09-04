#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

int main(int argc, char const *argv[])
{
    char src[] = "test";
    char dest[] = "test";
    int n = 5;
    int *t = ft_calloc(n, sizeof(int));
    
    printf("FT: %s\n", ft_itoa(-5));
    //printf("DE: %d\n", substr(dest, src, n));
    return 0;
}
