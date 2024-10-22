#include "libft.h"

int     ft_isdigit(char *str)
{
        int     i;

        i = 0;

        while(str[i] != '\0')
        {
                if(str[i] >= '0' && str[i] <= '9')
                {
                        i++;
                }
                else
                {
 //                       printf("not digit\n");
                        return (1);
                }
        }
//                        printf("is digit\n");
                        return (0);
}

/* int     main(void)
{
        char    *string = "123";
        char    *string2 = "abc";
        char    *string3 = "12a3";

        ft_isdigit(string);
        ft_isdigit(string2);
        ft_isdigit(string3);
        return (0);
} */
