#include "libft.h"

char    *ft_strlcat(char *dest, const char *src, size_t size);

void    ft_putchar_fd(char c, int fd);

void    ft_putstr_fd(char *s, int fd);

size_t ft_strlen(const char *str);


int     main(void)
{
        char    *src = "this is ";
        char    dest[100] = "a string!";

        ft_strlcat(dest, src);
        ft_putstr_fd(dest, 1);
        return (0);
}

char    *ft_strlcat(char *dest, const char *src, size_t)
{
        int     dest_len = ft_strlen(dest);
        int     i;

        i = 0;
        while (src[i] != '\0')
        {
                dest[dest_len + i] = src[i];
                i++;
        }
        dest[dest_len + i] = '\0';
        return (dest);
}


void    ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
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