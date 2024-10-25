//#include "libft.h"

#include <string.h>
#include <stdio.h>

void    *ft_memchr(const void *str, int c, size_t n);

int     main(void)
{
        char    *string = "this is a string";
        char    ch = 'a';
        int     nb = 7;
        char    *result;

        result = ft_memchr(string, ch, nb);
        if (result == NULL)
                printf("the character |%c| cound't be find until the |%d| position of the string.\n", ch, nb);
        else
                printf("the string after |%c| is |%s|\n", ch, result);
        return (0);
}

void    *ft_memchr(const void *str, int c, size_t n)
{
        unsigned char    *string;
        unsigned char    ch;
        size_t i;

        string = (unsigned char *)str;
        ch = c;
        i = 0;
        while (string[i] != '\0' && i < n)
        {
                if (string[i] == ch)
                        return ((void *) &string[i]);
                i++;
        }
        return (NULL);
}
/* 
int     main(void)
{
        char    *string = "this is a string";
        char    ch = 'a';
        int     nb = 9;
        char    *result;

        result =memchr(string, ch, nb);
        printf("the string after |%c| is |%s|\n", ch, result);
        return(0);
} */