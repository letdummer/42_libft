#include "libft.h"

int     ft_isascii(int c)
{
        if (c >= 0 && c <= 127)
        {
             //   printf("is ascii\n");
                return (1);
        }
        else
        {
            //    printf("not ascii\n");
                return(0);

        }

}

int     main(void)
{
        char    ch1 = 'a';
        char    ch2 = '$';
        char    ch3 = 'ñ';

        ft_isascii(ch1);
        ft_isascii(ch2);
        ft_isascii(ch3);
        return (0);
}