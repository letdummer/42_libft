/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:47:50 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 20:56:46 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <stdlib.h>

char		*ft_strtrim_test()
{
	char	*strings[] = {
		"   Hello World   ",
		"Hello",
		"--Hello--World--",
		".teste, bla ,.,.",
		NULL,
		"lorem \n ipsum \t dolor \n sit \t amet"
		};
	char	*chars[] = {" ", " ", "-", ",.", "", " "};
	char	*result;
	int		nb_tests;
	int		i;

	printf("\n/===================================\\");
	printf("\n|        Running ft_strtrim         |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	nb_tests = sizeof(chars) / sizeof(chars[0]);
	
	i = 0;
	while (i < nb_tests)
	{
		printf("\nTest %d\n", i);
		result = ft_strtrim(strings[i], chars[i]);
		if (result == NULL)
		{
			if (strings[i] == NULL)
			{
				printf("[🔴] Failure: Returned NULL (input string was NULL) with trim characters \"%s\"\n", chars[i]);
			}
			else
			{
				printf("[🔴] Failure: Allocation failed for input \"%s\" with trim characters \"%s\"\n", strings[i], chars[i]);
			}
		}
		else
		{
			printf("[🟢] Success! Original: |%s| \n\tTrimmed: |%s|\n", strings[i], result);
			free(result);
		}
		i++;
	}
	printf("\n");
	return (0);
}