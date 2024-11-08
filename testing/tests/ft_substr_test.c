/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:59:18 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 20:48:08 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr_test()
{
	char	*strings[] = {
		"1234567890",
		"1234567890",
		"1234567890",
		"1234567890",
		""
		};
	size_t		start[] = {0, 3, 2, -2, 1};
	size_t		len[] = {9, 7, -2, 5, 2};
	char	*result;
	int		nb_tests;
	int		i;
	
	printf("\n/===================================\\");
	printf("\n|        Running ft_substr          |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	i = 0;
	nb_tests = sizeof(strings) / sizeof(strings[0]);
	
	while (i < nb_tests)
	{
		printf("\nTest %d\n", i);
		result = ft_substr(strings[i], start[i], len[i]);
		if (!result)
			printf("[🔴] Failure: Returned NULL (allocation failed)\n");
		if (result != NULL)
		{
			printf("[🟢] Success!\t%s\n",result);
			printf("string: |%s| start: |%ld| end: |%ld|\n", strings[i], start[i], len[i]);
			printf("\n");
		}
		i++;
	}

	printf("\n");
	return (0);
}
