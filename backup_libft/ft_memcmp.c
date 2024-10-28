/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:06:00 by ldummer-          #+#    #+#             */
/*   Updated: 2024/10/28 14:06:01 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n);

int	main(void)
{
	char	str1[] = "1234567";
	char	str2[] = "1234567";
	int		result = memcmp(str1, str2, sizeof(str1));

	if (result < 0)
		printf("First is less than second.\n");
	else if (result == 0)
		printf("First is equal to second.\n");
	else
		printf("First is greater than second.\n");
	return (0);
}

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*string1;
	char	*string2;

	i = 0;
	string1 = (char *)str1;
	string2 = (char *)str2;
	while (string1[i] != '\0' && string1[i] == string2[i] && i < n)
	{
		i++;
	}
	return (string1 - string2);
}
