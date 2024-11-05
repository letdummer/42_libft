/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lethallyn <lethallyn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:45:08 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/05 15:45:09 by lethallyn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
char	*ft_strchr(const char *str, int c);

int	main(void)
{
	char		*string = "this is a string";
	const char	c = 'a';
	char		*result;

	result = ft_strchr(string, c);
	printf("String after |%c| is:\t \"%s\"\n", c, result);
	return (0);
} */

char	*ft_strchr(const char *str, int c)
{
	char	ch;

	ch = (char)c;
	while (*str != '\0' )
	{
		if (*str == ch)
		{
			return ((char *)str);
		}
		str++;
	}
	if (ch == '\0')
		return ((char *) str);
	return (NULL);
}
