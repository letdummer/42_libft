/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:17:21 by ldummer-          #+#    #+#             */
/*   Updated: 2024/10/28 14:17:25 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *str1);

size_t	ft_strlen(const char *str);

int	main(void)
{
	char	*string = NULL;
	char	*newstr;

	newstr = ft_strdup(string);
	if (newstr == NULL)
		printf("the string is NULL\n");
	else
		printf("The new string is: %s\n", newstr);
	free(newstr);
	return (0);
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
