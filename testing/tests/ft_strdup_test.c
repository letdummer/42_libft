/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:47:27 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 20:50:27 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_strdup_test()
{
	char	*strings[] = {"lol", "this is a string", "", NULL};
	char	*newstr;
	char	*original_result;
	char	*str;
	int		nb_tests;
	int		i;

	printf("\n/===================================\\");
	printf("\n|        Running ft_strdup          |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	nb_tests = sizeof(strings) / sizeof(strings[0]);
	i = 0;
	while (i < nb_tests)
	{
		printf("\nTest %d\n", i);
		str = strings[i];
		
		if (str == NULL)
		{
			printf("[🔴] Failure: Returned NULL (allocation failed)\n");
			i++;
			continue;
		}
		
		newstr = ft_strdup(str);
		original_result = strdup(str);
		
		if (newstr == NULL || original_result == NULL)
            printf("[🔴] Failure: Returned NULL (allocation failed)\n");
        else if (strcmp(newstr, original_result) == 0)
            printf("[🟢] Success: The new string is: '%s'\n", newstr);
		else
		{
			printf("[🔴] Failure: the result doesn't match with the original string.\n");
			printf("Expected: %s\n", original_result);
			printf("Result: %s\n", newstr);
		}
		if (newstr)
			free(newstr);	
		if (original_result)
			free(original_result);
		i++;
	}
	printf("\n");
}
