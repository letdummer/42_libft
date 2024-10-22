#include "libft.h"

size_t ft_strlen(const char *str)
{
        int     i;

        i = 0;
        while(str[i] != '\0')
        {
                i++;
        }
        return(i);

}

int     main(void)
{
        char    *string = "Quantos caracteres tem esta frase?";

        printf("%d\n", ft_strlen(string));
        return (0);
}