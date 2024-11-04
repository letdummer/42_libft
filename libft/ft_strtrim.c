#include "libft.h"

static int	ft_to_ignore(const char *s, char c);
static char	*ft_new_string(const char *s1, size_t start, size_t len);
/* 
char		*ft_strtrim(char const *s1, char const *set);
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
	char *result;

	printf("\n*************************\n");
	printf("*\tTesting\t\t*");
	printf("\n*************************\n");
	result = ft_strtrim("", " ");
	printf("Trim empty string: |%s|\n", result);
	free(result);
	result = ft_strtrim("   ", " ");
	printf("Trim only spaces: |%s|\n", result);
	free(result);
	result = ft_strtrim("Hello", " ");
	printf("Trim no spaces: |%s|\n", result);
	free(result);
	result = ft_strtrim("   Hello World   ", " ");
	printf("Trim with spaces: |%s|\n", result);
	free(result);
	result = ft_strtrim("--Hello--World--", "-");
	printf("Trim with dashes: |%s|\n", result);
	
	result = ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", " ");
	printf("Trim: |%s|\n", result);

	result = ft_strtrim("--Hello--World--", "-");
	printf("Trim with dashes: |%s|\n", result);
	free(result);
	return (0);
} */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	if (ft_strlen(s1) == 0)
		return (0);
	while (s1[i] && ft_to_ignore(set, s1[i]))
		i ++;
	while (j > i && ft_to_ignore(set, s1[j - 1]))
		j--;
	return (ft_new_string(s1, i, j));
}

static int	ft_to_ignore(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_new_string(const char *s1, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
