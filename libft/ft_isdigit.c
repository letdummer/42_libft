#include "libft.h"

#include <stdio.h>

int     ft_isdigit(int c)
{
        if(c >= '0' && c <= '9')
                return (0);
        else
                return (1);
}

int     main(void)
{
        int     c;
        int     result;

        c = '9';
        result = ft_isdigit(c);
        if (result == 0)
                printf("%c is digit\n", c);
        else
                printf("%c is not digit\n", c);
        return (0);
}