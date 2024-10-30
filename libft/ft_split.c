#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char			**ft_split(char const *s, char c);
static size_t	ft_count(const char *str, char c);
static char 	*ft_fill_word(const char *str, int start, int end);
static void 	*ft_alloca(char **strings, int k);

size_t	ft_strlen(const char *str);


void	*ft_calloc(size_t nitems, size_t size);

int	main(void)
{
	char string[16] = "string -to-split";
    char	**result;
	char	ch = ' ';
	int		i = 0;
   
/* 	char str[16] = "string -to-split";
	char	*res;
	res = strtok(str, "  ");
 	printf("\n\tORIGINAL FUNCTION:\n");
	printf("---------------------------\n");
    while (res != NULL) {
        printf(" %s\n", res);
        res = strtok(NULL, " ");
    } */

	printf("---------------------------\n");
	result = ft_split(string, ch);
	printf("\tCREATED FUNCTION:\n");
	if (result)
	{
		while (result[i] != NULL)
		{
			printf(" %s\n", result[i]);
			i++;
		}
	}
	printf("---------------------------\n\n");
	i = 0;
    while (result[i] != NULL)
    {
        free(result[i]);
        i++;
    }
    free(result);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**string;
	int		s_word;
	size_t		i;
	int		j;

	i = 0;
	j = 0;
	s_word = -1;

	string = ft_calloc((ft_count(s, c) + 1), sizeof(char *));
	if (!string)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && s_word < 0)
			s_word = i;
		else if ((s[i] == c || i == ft_strlen(s)) && s_word >= 0)
		{
			string[j] = ft_fill_word(s, s_word, i);
			if (!(string[j]))
				return (ft_alloca(string, j));
			s_word = - 1;
			j++;
		}
		i++;
	}
	return (string);
}

static size_t	ft_count(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*str)
	{
		if (*str != c && j == 0)
		{	
			j = 1;
			i++;
		}
		else if (*str == c)
			j = 0;
		str++;
	}
	return (i);
}

static void *ft_alloca(char **strings, int k)
{
	int	i;

	i = 0;
	while (i < k)
	{
		free(strings[i]);
		i++;
	}
	free(strings);
	return (NULL);
}

static char *ft_fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}


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
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

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