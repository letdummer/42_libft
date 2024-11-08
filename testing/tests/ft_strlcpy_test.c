/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:48:02 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 20:50:05 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <string.h>

size_t		ft_strlcpy_test()
{
	char	*source[] = {
		"this is a string",
		"another string",
		NULL
	};
	char	dest[50];
	int		nb_tests;
	size_t		result;
	int		i;
	int		nb;
	
	printf("\n/===================================\\");
	printf("\n|        Running ft_strlcpy         |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");
	
	nb_tests = sizeof(source) / sizeof(source[0]);

	i = 0;
	nb = 5;
	while (i < nb_tests)
	{
		printf("\nTest %d\n", i);
		if (source[i] == NULL)
		{
			printf("[🔴] Failure. Source is NULL\n");		
			i++;
			continue;
		}
		printf("\tTest %d\n", i);
		
		ft_memset(dest, 0, sizeof(dest));
		result = ft_strlcpy(dest, source[i], nb);
		printf("ft_strlcpy:\nCopied '%s' into => '%s'\nLength: '%ld'\n", source[i], dest, result);
		
		if (result)
			printf("[🟢] Success!\n");
		else
			printf("[🔴] Failure.\n");		
		printf("\n-----------------------------------\n");
		i++;
		nb++;
	}
	printf("\n");
	return (0);
} 
