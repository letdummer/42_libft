/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lethallyn <lethallyn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:45:10 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/05 18:14:41 by lethallyn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
char	*ft_strdup(const char *str1);

size_t	ft_strlen(const char *str);

int	main(void)
{
	char	*string = "lol";
	char	*newstr;

	newstr = ft_strdup(string);
	if (newstr == NULL)
		printf("the string is NULL\n");
	else
		printf("The new string is: %s\n", newstr);
	free(newstr);
	return (0);
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
} */

char	*ft_strdup(const char *str1)
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
}



