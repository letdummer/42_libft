/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:12:32 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/06 17:42:56 by ldummer-         ###   ########.fr       */
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
	char		*result;
	char		*reso;

	nb_tests = sizeof(dest_str) / sizeof(dest_str[0]);
	
	printf("\n/===================================\\");
	printf("\n|        Running ft_memmove()       |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n\n");
	
	i = 0;
	while (i < nb_tests)
	{
		if (i == 0)
		{
			strcpy(dest_str, "Empty destination");
			strcpy(dest_original, "Empty destination");
			result = ft_memmove(dest_str, src_str[i], test_counts[i]);
			reso = memmove(dest_original, src_str[i], test_counts[i]);
			printf("Test %d:\n\tft_memmove dest = \"%s\"\n\tmemmove dest = \"%s\"\n", i + 1, result, reso);
			if ()
			}
		
		else if (i == 1)
		{
			strcpy(dest_str, "Overlap here!");
			strcpy(dest_original, "Overlap here!");
			result = ft_memmove(dest_str + 5, dest_str, test_counts[i]);
			reso = memmove(dest_str + 5, dest_str, test_counts[i]);
			printf("Test %d:\n\tft_memmove dest = \"%s\"\n\tmemmove dest = \"%s\"\n", i + 1, dest_str, dest_original);		}
		else if (i == 2)
		{
			strcpy(dest_str, "Overlap source ahead");
			strcpy(dest_original, "Overlap source ahead");
			result = ft_memmove(dest_str, dest_str + 8, test_counts[i]);
			reso = memmove(dest_str, dest_str + 8, test_counts[i]);
			printf("Test %d:\n\tft_memmove dest = \"%s\"\n\tmemmove dest = \"%s\"\n", i + 1, dest_str, dest_original);		}
		else if (i == 3)
		{
			strcpy(dest_str, "EdgeOverlap");
			strcpy(dest_original, "EdgeOverlap");
			result = ft_memmove(dest_str + 4, dest_str, test_counts[i]);
			reso = memmove(dest_str + 4, dest_str, test_counts[i]);
			printf("Test %d:\n\tft_memmove dest = \"%s\"\n\tmemmove dest = \"%s\"\n", i + 1, dest_str, dest_original);		}
		else if (i == 4)
		{
			strcpy(dest_str, "Zero count should not change");
			strcpy(dest_original, "Zero count should not change");
			result = ft_memmove(dest_str, src_str[i], test_counts[i]);
			reso = memmove(dest_str, src_str[i], test_counts[i]);
			printf("Test %d:\n\tft_memmove dest = \"%s\"\n\tmemmove dest = \"%s\"\n", i + 1, dest_str, dest_original);		
		}
		i++;
	}
	printf("\n");
	return (0);
}

/*

printf("[🟢] Success: Input %c validated. ASCII: %d\n", ch, ch);

else
	{
		printf("[🔴] Failure: Input %c did not pass.\n", ch);
		printf("Expected: %d\tResult: %d\n" 000000);
	}



*/