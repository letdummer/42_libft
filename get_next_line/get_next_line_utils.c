#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
	char	ch;

	ch = (char)c;
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == ch)
		{
			return ((char *)str);
		}
		str++;	
	}
	if (ch == *str)
		return ((char *)str);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char		*new_str;
	size_t		i;
	size_t		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new_str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1 && s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	free(s1);
	//new_str[i + j] = '\0';
	return (new_str);
}

/* char	*ft_strdup(const char *str1)
{
	char	*new_string;
	size_t	i;

	new_string = (char *) malloc (ft_strlen(str1) + 1);
	if (!new_string)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		new_string[i] = str1[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
} */

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = malloc(nitems * size);
	if (ptr == NULL)
		return (NULL);
	while (i < (nitems * size))
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

