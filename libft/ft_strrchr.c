//#include "libft.h"

#include <stdio.h>

char *ft_strrchr(const char *str, int c);

int     main(void)
{
    const char str[] = "this is a string";
    const char ch = 's';
    char *res;

    res = ft_strrchr(str, ch);
    printf("Last occurency of |%c| is:\t \"%s\"\n", ch, res);
    return (0);
}

char *ft_strrchr(const char *str, int c)
{
    int     i;
    char    ch;
    char    *result;

    i = 0;
    ch = (char) c;
    result = NULL;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
            result = (char *) &str[i];
        i++;
    }
    return (result);
}

/* #include <string.h>

int     main(void)
{
   const char str[] = "this is a string";
   const char ch = 's';
   char *ret;

   ret = strrchr(str, ch);

   printf("String after |%c| is: |%s|\n\n", ch, ret);

   if (ret)
        printf("Last occurrence of '%c' in \"%s\" is at index %lld\n", ch, str, ret - str);
    else 
       printf("'%c' is not present in \"%s\"\n", ch, str);
   
   
        return (0);
} */