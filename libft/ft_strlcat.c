/*
	É PRECISO USAR A FUNCAO ITOA!!
*/
#include "libft.h"
/* 
size_t	*ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
int	main(void)
{
	char	*src = "this is ";
	char	dest[100] = "a string!";
	char	res_str[20];
	size_t	nb = 10;
	size_t	result;

	result = ft_strlcat(dest, src, nb);
	res_str = result;
	ft_putstr_fd(res_str, 1);
	return (0);
} */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	result;
	size_t	i;

	i = 0;
	result = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size > dest_len)
		result = src_len + dest_len;
	else
		result = src_len + size;
	while (src[i] && (dest_len + 1) < size)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (result);
}

/* void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
 */