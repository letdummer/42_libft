/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lethallyn <lethallyn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:45:38 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/05 17:03:25 by lethallyn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
char	*ft_strrchr(const char *str, int c);

int	main(void)
{
	const char	str[] = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	const char	c = '\0';
	char		*res;
	char		*result;

	res = strrchr(str, c);
	printf("Last occurency of |%d| is: |%s|\n", c, res);
	result = ft_strrchr(str, c);
	printf("Last occurency of |%d| is: |%s|\n", c, result);
	return (0);
} */

char	*ft_strrchr(const char *str, int c)
{
	char	ch;
	char	*result;

	ch = (char) c;
	result = NULL;
	while (*str != '\0')
	{
		if (*str == ch)
			result = ((char *)str);
		str++;
	}
	if (ch == '\0')
		return ((char *)str);
	return (result);
}
