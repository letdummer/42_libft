#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int	ft_isalnum(int c);

int	ft_isalpha(char *string);

int	ft_isascii(int c);

int	ft_isdigit(char *str);

int	ft_isprint(int c);

void	*ft_memset(void *str, int c, size_t n);

void	ft_putchar_fd(char c, int fd);

size_t ft_strlen(const char *str);

void	ft_putstr_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

char	*ft_strlcat(char *dest, const char *src, size_t size);

#endif