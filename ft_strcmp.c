#include <stdio.h>

int ft_strcmp(const char *s1, const char *s2);

int main(void)
{
    char    *str1 = "12";
    char    *str2 = "12";
    int     result;

    result = ft_strcmp(str1, str2);

    printf("%d\n", result);
    if (result == 0)
        printf("Equals\n");
    else if (result < 0)
        printf("s1 less than s2\n");
    else 
        printf("s1 greater than s2\n");

    return (0);
}

int ft_strcmp(const char *s1, const char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}