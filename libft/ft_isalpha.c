#include "libft.h"

int     ft_isalpha(int c)
{
        if ((c >= 'a' && c <= 'z')
                || (c >= 'A' && c <= 'Z'))
                return 0;
        else
                return 1;
}

int     main(void)
{
        char     c;
        int     result;

        c = 'a';
        result = ft_isalpha(c);
        printf("[%d]", result);
        if (result == 0)
                printf("\t[%c] is alphabetic\n", c);
        else
                printf("\t[%c] is not alphabetic\n", c);
        return 0;
}