//# include "libft.h"
#include <stdio.h>
#include <stdlib.h>

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
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int	i;
	int	j;
	int	len_s1;
	int	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);

	string = (char *) malloc((len_s1 + len_s2 + 1 ) * sizeof(char));
	if (string == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (i < len_s1)
	{
		string[i] = s1[i];
		i++;
	}
	while (j < len_s2)
	{
		string[i] = s2[j];
		i++;
		j++;
	}
	string[i] = '\0';
	return (string);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}