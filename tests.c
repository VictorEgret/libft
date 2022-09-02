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

    for (size_t i = 0; i < n; i++)
    {
        printf("FT: %d\n", t[i]);
    }
    
    //printf("FT: %d\n", ft_memcmp(dest, src, n));
    //printf("DE: %d\n", memcmp(dest, src, n));
    return 0;
}
