#include "libft.h"

void    ft_putstr_fd(char *s, int fd);

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

int     main(void)
{
    char    *str = "abcd";

    ft_putstr_fd(str, 1); 

        return (0);
}

void    ft_putstr_fd(char *s, int fd)
{
        int i = 0;

        while (s[i])
        {
                ft_putchar_fd(s[i], fd);
                i++;
        }
}