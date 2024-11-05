/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lethallyn <lethallyn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:45:41 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/05 17:20:05 by lethallyn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_to_ignore(const char *s, char c);
static char	*ft_new_string(const char *s1, size_t start, size_t len);

/* /////////////////////////////////////////////////
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

	result = ft_strtrim("", "");
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
	free(result);

	result = ft_strtrim(".teste, bla ,.,.", ",.");
	printf("Trim with dashes: |%s|\n", result);
	free(result);
	
	result = ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", " ");
	printf("Trim: |%s|\n", result);
	free(result);

	result = ft_strtrim("   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ", " \n\t");
	printf("Trim with dashes: |%s|\n", result);
	free(result);

	return (0);
} ///////////////////////////////////////////////// */

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
