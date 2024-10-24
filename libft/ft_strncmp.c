#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, int n);

int main(void)
{
    char    *str1 = "113";
    char    *str2 = "113";
    int     result;
    int     n = 2;

    result =ft_strncmp(str1, str2, n);
    printf("%d\n", result);
    if (result == 0)
        printf("equals\n");
    else if (result < 0)
        printf("s1 less than s2\n");
    else
        printf("s1 greater than s2\n");
    return (0);
}

int ft_strncmp(const char *s1, const char *s2, int n)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
    {
        i++;
    }
    return(s1[i] - s2[i]);
}