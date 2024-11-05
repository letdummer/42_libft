/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lethallyn <lethallyn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:45:05 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/05 21:06:13 by lethallyn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t	ft_count(const char *str, char c);
static char		*ft_fill_word(const char *str, int start, int end);
static void		*ft_alloca(char **strings, int k);
static char		**ft_initialize_vars(const char *s, char c, char ***string,
		int *s_word, size_t *i, size_t *j);
/* /////////////////////////////////////////////////////////////
 void			*ft_calloc(size_t nitems, size_t size);
size_t			ft_strlen(const char *str);
char			**ft_split(char const *s, char c);
int	main(void)
{
	char 	string[30] = "  ol ol";
	char	ch = ' ';
    char	**result;
	int		i = 0;
 	
	printf("---------------------------\n");
	printf("\tCREATED FUNCTION:\n");
	result = ft_split(string, ch);
	if (result)
	{
		while (result[i] != NULL)
		{
			printf(" %s\n", result[i]);
			free (result[i]);
			i++;
		}
		free (result);
	}
	else
		printf("Failed to split the string.\n");
	printf("---------------------------\n\n");
	return (0);
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
} /////////////////////////////////////////////////////	 */	

static char	**ft_initialize_vars(const char *s, char c, char ***string,
	int *s_word, size_t *i, size_t *j)
{
	*i = 0;
	*j = 0;
	*s_word = -1;
	*string = ft_calloc((ft_count(s, c) + 1), sizeof(char *));
	return (*string);
}	

char	**ft_split(char const *s, char c)
{
	char	**string;
	int		s_word;
	size_t	i;
	size_t	j;

	if (!ft_initialize_vars(s, c, &string, &s_word, &i, &j))
		return (NULL);
	while (i < (ft_strlen(s) +1 ))
	{
		if (s[i] != c && s_word < 0)
			s_word = i;
		else if ((s[i] == c || i == ft_strlen(s)) && s_word >= 0)
		{
			string[j] = ft_fill_word(s, s_word, i);
			if (!(string[j]))
				return (ft_alloca(string, j));
			s_word = -1;
			j++;
		}
		i++;
	}
	return (string);
}

static size_t	ft_count(const char *str, char c)
{
	size_t	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*str == c)
			in_word = 0;
		str++;
	}
	return (count);
}

static void	*ft_alloca(char **strings, int k)
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

static char	*ft_fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(((end - start) + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}
