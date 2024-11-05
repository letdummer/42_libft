/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lethallyn <lethallyn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:43:48 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/05 20:41:54 by lethallyn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void	*ft_memchr(const void *str, int c, size_t n);

int	main(void)
{
	char	*string = "this is a string";
	char	ch = 'a';
	int		nb = 10;
	char	*result;

	result = ft_memchr(string, ch, nb);
	if (result == NULL)
		printf("the character |%c| cound't be find "
			"until the |%d| position of the string.\n", ch, nb);
	else
		printf("the string after |%c| is |%s|\n", ch, result);
	return (0);
}





void	*ft_memchr(const void *str, int c, size_t n)
	{
	unsigned char	*string;
	unsigned char	ch;
	size_t			i;

	string = (unsigned char *)str;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (string[i] == ch)
			return ((void *) &string[i]);
		i++;
	}
	return (NULL);
}
