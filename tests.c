#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

int main(int argc, char const *argv[])
{
    char src[] = "test";
    char dest[] = "z";
    char src2[] = "test";
    char dest2[] = "z";
    int n = 5;

    printf("FT: %lu\n", ft_strlcat(dest, src, n));
    printf("Src: %s\nDest: %s\n\n", src, dest);
    printf("DE: %lu\n", strlcat(dest2, src2, n));
    printf("Src: %s\nDest: %s\n", src2, dest2);
    return 0;
}
