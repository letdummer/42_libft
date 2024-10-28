/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:31:18 by ldummer-          #+#    #+#             */
/*   Updated: 2024/10/28 14:31:19 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

#include <stdio.h>
#include <stdlib.h>

char		*ft_strtrim(char const *s1, char const *set);
static int	ft_to_ignore(const char *s, char c);
static char	*ft_new_string(const char *s1, size_t start, size_t len);

size_t		ft_strlen(const char *str);

int	main(void)
{
	char const	*string = "123this  is a  123   string.123";
	char		*set = "123";
	char		*result;

	result = ft_strtrim(string, set);
	printf("%s\n", string);
	printf("%s\n", result);
	free (result);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (0);
	while (ft_to_ignore(set, s1[i]))
		i ++;
	while (ft_to_ignore(set, s1[j]))
		j--;
	return (ft_new_string(s1, i, j - (i - 1)));
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

	if (len <= 0 || start >= ft_strlen(s1))
		return (0);
	str = malloc (sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
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
