/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:33:31 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 20:48:28 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <string.h>

void	ft_strnstr_test()
{
	char	*largestring[] = {
		"Foo Bar Baz",
		"this is a string",
		"this is also a string",
		"this will not appear",
		NULL};
	char		*smallstring[] = {"Bar", "a", "also", "u"};
	size_t		sizes[] = {7, 10, 10, 2};
	char		*result;
	int			i;
	
	printf("\n/===================================\\");
	printf("\n|        Running ft_strnstr         |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	i = 0;
	while (largestring[i] != NULL)
	{
		printf("\nTest %d\n", i);
		result = ft_strnstr(largestring[i], smallstring[i], sizes[i]);
		
		if (result != NULL)
		{
			printf("[🟢] Success: Found substring |%s| in string \"%s\" within limit of |%zu| characters.\n", smallstring[i], largestring[i], sizes[i]);
			printf("    Found at position: |%ld|\n", result - largestring[i]);
			printf("\n");
		}
		else
		{
			printf("[🔴] Failure: Substring |%s| not found in string \"%s\" within limit of |%zu| characters.\n", smallstring[i], largestring[i], sizes[i]);
			printf("\n");
		}
		i++;
	}
	printf("\n");
}
