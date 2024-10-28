/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:33:06 by ldummer-          #+#    #+#             */
/*   Updated: 2024/10/28 14:33:07 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *str1);
void	*ft_calloc(size_t nitems, size_t size);

size_t	ft_strlen(const char *str);

int	main(void)
{
	char	*string = "1234567890";
	char	*result;

	result = ft_substr(string, 3, 9);
	if (result == NULL)
		printf("allocation failed.\n");
	else
		printf("%s\n", result);
	free(result);
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*newstring;
	size_t	length;

	length = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= length)
		return (ft_calloc(1, sizeof(char)));
	if (len > length - start)
		len = length - start;
	newstring = (char *) ft_calloc(len + 1, sizeof(char));
	if (newstring == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		newstring[i] = s[start + i];
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}

char	*ft_strdup(const char *str1)
{
	char	*new_string;
	size_t	i;

	if (str1 == NULL)
		return (NULL);
	new_string = (char *) malloc (ft_strlen(str1) + 1);
	i = 0;
	while (str1[i])
	{
		new_string[i] = str1[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
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
