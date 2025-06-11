/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:08:17 by ldummer-          #+#    #+#             */
/*   Updated: 2025/06/11 09:55:00 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(const char *str, char c);
static char		*ft_fill_word(const char *str, int start, int end);
static void		*ft_free_str(char **strings, int k);
static char		**ft_initialize_vars(const char *s, char c, char ***string,
					int *start_word);

static char	**ft_initialize_vars(const char *s, char c, char ***string,
	int *start_word)
{
	*start_word = -1;
	*string = ft_calloc((ft_count(s, c) + 1), sizeof(char *));
	return (*string);
}

// Allocates and returns an array of strings 
// obtained by splitting ’s’ using the character ’c’ as a delimiter. 
// The array must be ended by a NULL pointer.
char	**ft_split(char const *s, char c)
{
	char	**string;
	int		start_word;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!ft_initialize_vars(s, c, &string, &start_word))
		return (NULL);
	while (i < (ft_strlen(s) + 1))
	{
		if (s[i] != c && start_word < 0)
			start_word = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start_word >= 0)
		{
			string[j] = ft_fill_word(s, start_word, i);
			if (!(string[j]))
				return (ft_free_str(string, j));
			start_word = -1;
			j++;
		}
		i++;
	}
	return (string);
}

static size_t	ft_count(const char *str, char c)
{
	size_t	count;
	int		in_word;

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

static void	*ft_free_str(char **strings, int k)
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

// Allocates (with malloc(3)) and returns a copy of ’s1’
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
