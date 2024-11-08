/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:12:32 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 20:51:55 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

void	*ft_memmove_test()
{
	char		dest_str[50];
	char		dest_original[50];
	const char	*src_str[50] = {
		"First test string with no overlap",
		"Overlap test: dest ahead",
		"Overlap test: src ahead",
		"Edge case with partial overlap",
		"Zero count test"
	};
	size_t		test_counts[5] = {20, 12, 12, 5, 0};
	int			i;
	int			nb_tests;

	nb_tests = sizeof(test_counts) / sizeof(test_counts[0]);
	
	printf("\n/===================================\\");
	printf("\n|        Running ft_memmove         |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n\n");
	
	i = 0;
	while (i < nb_tests)
	{
		if (i == 0)
		{
			printf("\nTest %d\n", i);
			strcpy(dest_str, "Empty destination");
			strcpy(dest_original, "Empty destination");
			ft_memmove(dest_str, src_str[i], test_counts[i]);
			memmove(dest_original, src_str[i], test_counts[i]);
			printf("Test %d:\n\tft_memmove dest = \"%s\"\n\tmemmove dest = \"%s\"\n", i + 1, dest_str, dest_original);
			if (strcmp(dest_str, dest_original) == 0)
				printf("[🟢] Success!\n\n");
			else
				printf("[🔴] Failure.\n\n");
		}
		
		else if (i == 1)
		{
			printf("\nTest %d\n", i);
			strcpy(dest_str, "Overlap here!");
			strcpy(dest_original, "Overlap here!");
			ft_memmove(dest_str + 5, dest_str, test_counts[i]);
			memmove(dest_str + 5, dest_str, test_counts[i]);
			printf("Test %d:\n\tft_memmove dest = \"%s\"\n\tmemmove dest = \"%s\"\n", i + 1, dest_str, dest_original);
			if (strcmp(dest_str, dest_original) == 0)
				printf("[🟢] Success!\n\n");
			else
				printf("[🔴] Failure.\n\n");
		}
		else if (i == 2)
		{
			printf("\nTest %d\n", i);
			strcpy(dest_str, "Overlap source ahead");
			strcpy(dest_original, "Overlap source ahead");
			ft_memmove(dest_str, dest_str + 8, test_counts[i]);
			memmove(dest_str, dest_str + 8, test_counts[i]);
			printf("Test %d:\n\tft_memmove dest = \"%s\"\n\tmemmove dest = \"%s\"\n", i + 1, dest_str, dest_original);
			if (strcmp(dest_str, dest_original) == 0)
				printf("[🟢] Success!\n\n");
			else
				printf("[🔴] Failure.\n\n");
		}
		else if (i == 3)
		{
			printf("\nTest %d\n", i);
			strcpy(dest_str, "EdgeOverlap");
			strcpy(dest_original, "EdgeOverlap");
			ft_memmove(dest_str + 4, dest_str, test_counts[i]);
			memmove(dest_str + 4, dest_str, test_counts[i]);
			printf("Test %d:\n\tft_memmove dest = \"%s\"\n\tmemmove dest = \"%s\"\n", i + 1, dest_str, dest_original);		
			if (strcmp(dest_str, dest_original) == 0)
				printf("[🟢] Success!\n\n");
			else
				printf("[🔴] Failure.\n\n");		
		}
		else if (i == 4)
		{
			printf("\nTest %d\n", i);
			strcpy(dest_str, "Zero count should not change");
			strcpy(dest_original, "Zero count should not change");
			ft_memmove(dest_str, src_str[i], test_counts[i]);
			memmove(dest_str, src_str[i], test_counts[i]);
			printf("Test %d:\n\tft_memmove dest = \"%s\"\n\tmemmove dest = \"%s\"\n", i + 1, dest_str, dest_original);
			if (strcmp(dest_str, dest_original) == 0)
				printf("[🟢] Success!\n\n");
			else
				printf("[🔴] Failure.\n\n");	
		}
		i++;
	}
	printf("\n");
	return (0);
}
