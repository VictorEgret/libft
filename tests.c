#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

int main(int argc, char const *argv[])
{
    char src[] = "testazd";
    char cmp[] = " ";
    char c = 'a';
    int n = 5;
    void *test = malloc(n);

    printf("FT: %s\n", ft_memmove(test, src, n));
    //printf("DE: %s\n", memmove(test, src, n));
    return 0;
}
