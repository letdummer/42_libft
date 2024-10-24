#include <stdio.h>

char    *ft_strcpy(char *dest, const char *src);

int main(void)
{
    char    *source = "abcdef";
    char    dest[20];

    ft_strcpy(dest, source);
    printf("%s\n", dest);
    printf("%s\n", dest);
    return (0);
}

char    *ft_strcpy(char *dest, const char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}