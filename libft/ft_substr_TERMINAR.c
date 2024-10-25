//#include "libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_substr(char const *s, unsigned int start, size_t len);

int     main(void)
{
    char    *string = "0123456789";
    char    *result;

    result = ft_substr(string, 3, 9);
    printf("%s\n", result);
    return (0);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    char    *newstring;
    
    i = start;
    (int *)malloc(sizeof(char));

    while (s[i] != '\0' && i < len)
    {
        i++;
    }

    return (NULL);
    return (newstring);
}