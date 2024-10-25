//#include "libft.h"

#include <stdio.h>
#include <string.h>

char        *ft_strnstr(const char *big,	const char *little, size_t len);

int     main(void)
{
    const char	*largestring = "Foo Bar Baz";
	const char	*smallstring = "Bar";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 7);
    if (ptr != NULL) {
        printf("%.*s\n", (int)strlen(smallstring), ptr);
    } else {
        printf("Substring not found within the limit.\n");
    }
    return (0);
}

char        *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t     i;
    size_t     j;

    i = 0;
    if (little[i] == 0)
            return ((char *) big);
    while (big[i] != '\0' && i < len)
    {
        j = 0;
        while (big[i + j] != '\0'&& little[j] != '\0'
                && big [i + j] == little[j] && (i + j) < len)
        {
            j++;
        }
        if (little[j] == '\0')
            return ((char *) &big[i]);
        i++;        
    }
    return (0);
}