#include "libft.h"

int     ft_isalnum(int c)
{
                if ((c >= 'a' && c <= 'z')
                        || (c >= 'A' && c <= 'Z')
                        || (c >= '0' && c <= '9'))
                {
                        printf("alfanum\n");
                        return (1);
                }
                else
                {
                        printf("nao alfanum\n");
                        return (0);
                }


}

int     main(void)
{
        char    ch1 = 'a';
        char    ch2 = '3';
        char    ch3 = '$';

        ft_isalnum(ch1);
        ft_isalnum(ch2);
        ft_isalnum(ch3);
        return (0);
}
