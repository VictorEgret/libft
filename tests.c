#include <stdio.h>
#include "libft.h"

char * strnstr(const char *s, const char *find, size_t slen){
	char c, sc;
	size_t len;

	if ((c = *find++) != '\0') {
		len = strlen(find);
		do {
			do {
				if ((sc = *s++) == '\0' || slen-- < 1)
					return (NULL);
			} while (sc != c);
			if (len > slen)
				return (NULL);
		} while (strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *)s);
}

int main(int argc, char const *argv[])
{
    char src[] = "testazd";
    char cmp[] = "";
    int n = 5;
    printf("FT: %d\n", ft_strnstr(src, cmp, n));
    printf("DE: %d\n", strnstr(src, cmp, n));
    return 0;
}
