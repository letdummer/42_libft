#include "libft.h"
/* 
char	*ft_strchr(const char *str, int c);

int	main(void)
{
	char		*string = "this is a string";
	const char	c = 'a';
	char		*result;

	result = ft_strchr(string, c);
	printf("String after |%c| is:\t \"%s\"\n", c, result);
	return (0);
} */

char	*ft_strchr(const char *str, int c)
{
	char	ch;

	ch = (char)c;
	while (*str != '\0' )
	{
		if (*str == ch)
		{
			return ((char *)str);
		}
		str++;
	}
	if (ch == '\0')
		return ((char *) str);
	return (NULL);
}
