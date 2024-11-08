/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:21:49 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 21:13:44 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp_test()
{
	char	*string1[] = {"abc", "ab", "abc", "abc\xFF", NULL};
	char	*string2[] = {"abc", "abc", "ab", "abc\x80", "abc"};
	char	*str1;
	char	*str2;
	int		size[50] = {4, 3, 3, 4, 4};
	int		nb_tests;
	int		i;
	int		result;
	int		reso;
	
	printf("\n/===================================\\");
	printf("\n|        Running ft_strncmp         |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	nb_tests = sizeof(string1) / sizeof(string1[0]);
	
	i = 0;
	while (i < nb_tests)
	{
		printf("\nTest %d\n", i);
		str1 = string1[i];
		str2 = string2[i];
		printf("Comparing: |%s| with |%s| (limit: %d characters)\n", str1, str2, size[i]);

		if (str1 == NULL || str2 == NULL)
		{
			printf("[🔴] Failure: One of the strings is NULL (allocation failed).\n");
			return (1);
		}
		result = ft_strncmp(str1, str2, size[i]);
		reso = strncmp(str1, str2, size[i]);


		if (result == reso)
		{
			printf("[🟢] Success: the result matches with the original function.\n");
			printf("ft_strncmp:\t%d\n", result);
			printf("strncmp:\t%d\n", reso);
			if (result == 0)
				printf("|%s| is equal to |%s|\n", str1, str2);
			else if (result < 0)
				printf("|%s| is less than |%s|\n", str1, str2);
			else
				printf("|%s| is greater than |%s|\n", str1, str2);
			printf("\n");
		}
		else
		{
			printf("[🔴] Failure: the result does not match with the original function.\n");
			printf("ft_strncmp:\t%d\n", result);
			printf("strncmp:\t%d\n", reso);
			printf("\n");
		}
		i++;
	}
	printf("\n");
	return (0);
}
