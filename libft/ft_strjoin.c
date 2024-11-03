#include "libft.h"
/* 
char	*ft_strjoin(char const *s1, char const *s2);

size_t	ft_strlen(const char *str);

int	main(void)
{
	char	*string1 = "this is";
	char	*string2 = " a string";
	char	*result;

	result = ft_strjoin(string1, string2);
	printf("%s\n", result);
	return (0);
} */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t		i;
	size_t		j;

	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

/* 
size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
} */
