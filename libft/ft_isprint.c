#include "libft.h"

int     ft_isprint(int c)
{
        if (c >= 32 && c <= 126)
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
int     main(void)
{
        char    ch1 = 'a';
        char    ch2 = ' ';
        char    ch3 = 'ñ';

        ft_isprint(ch1);
        ft_isprint(ch2);
        ft_isprint(ch3);
        return (0);
}