#include "libft.h"
/* 
void	*ft_memmove(void *dest, const void *src, size_t count);

int	main(void)
{
	char		dest_str[] = "123456";
	const char	src_str[] = "abcdef";

	printf("Before memmove dest = %s, src = %s\n", dest_str, src_str);
	ft_memmove(dest_str, src_str, 3);
	printf("After memmove dest = %s, src = %s\n", dest_str, src_str);
	return (0);
} */

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char	*source;
	unsigned char	*destin;
	size_t		i;

	if(!dest && !src)
		return (NULL);
	source = (unsigned char *)src;
	destin = (unsigned char *) dest;
	if((size_t)dest - (size_t)src < count)
	{
	i = count;
	while (--i < count)
		destin[i] = source[i];
	}
	else
	{
		i = -1;
		while (++i < count)
			destin[i] = source[i];
	}
	return (destin);
}
