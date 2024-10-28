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
	int		i;
	char	ch;

	i = 0;
	ch = c;
	while (str[i] != '\0' )
	{
		if (str[i] == ch)
		{
			return ((char *) &str[i]);
		}
		i++;
	}
	return (NULL);
}
