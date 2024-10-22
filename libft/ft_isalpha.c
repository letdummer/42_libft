#include "libft.h"

int     ft_isalpha(char *string)
{
        int      i;
        i = 0;

        while (string[i] != '\0')
        {
        if ((string[i] >= 'a' && string[i] <= 'z')
                || (string[i] >= 'A' && string[i] <= 'Z'))
        {
                i++;
        }
        else
        {
//              printf("is not alphabetic\n");
                return 1;
        }
        }
//      printf("is alphabetic\n");
        return 0;
}
/*
int     main(void)
{
        char    *string = "abcde";
        char    *string2 = "123";
        char    *string3 = "abc1def";

        ft_isalpha(string);
        ft_isalpha(string2);
        ft_isalpha(string3);
        return 0;
}*/
