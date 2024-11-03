#include "libft.h"
/* 
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
static char	ft_transform(unsigned int i, char c);
size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int	main(void)
{
	char	*string[] = {
		"",
		"A",
		"123",
		"Hello World",
		"this function modifies the function when the index is even",
		NULL
	};

	char	*result;
	int		i;

	i = 0;
	while (string[i] != NULL)
	{
		result = ft_strmapi(string[i], ft_transform);
		
		if (result == NULL)
			printf("Allocation Failed!\n");
		else
		{
			printf("\n");
			printf("ORIGINAL_________ |%s|\n", string[i]);
			printf("TRANSFORMED______ |%s|\n\n", result);
			free (result);
		}
		i++;
	}
	return (0);
} 

static char	ft_transform(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		return (c = '#');
	}
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
