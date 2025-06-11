/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:09:07 by ldummer-          #+#    #+#             */
/*   Updated: 2025/06/11 09:56:26 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_to_ignore(const char *s, char c);
static char	*ft_new_string(const char *s1, size_t start, size_t len);

// Removes all characters in the set from the beginning and end of the string.
// Returns a new string.
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	if (len == 0)
		return (ft_new_string("", 0, 0));
	i = 0;
	j = len;
	while (s1[i] && ft_to_ignore(set, s1[i]))
		i ++;
	while (j > i && ft_to_ignore(set, s1[j - 1]))
		j--;
	return (ft_new_string(s1, i, j - i));
}

static int	ft_to_ignore(const char *s, char c)
{
	size_t	i;

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
	if (len == 0)
	{
		str[0] = '\0';
		return (str);
	}
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
