/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:48:02 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/06 19:07:00 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <string.h>

size_t		ft_strlcpy_test()
{
	char	*source[] = {"this is a string", "another string", "this string is really bigger than the others. trust me!"};
	char	dest[50];
	int		nb_tests;
	char		result;
	char		reso;
	int		i;
	int		nb;
	
	printf("\n/===================================\\");
	printf("\n|        Running ft_strlcpy()       |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");
	
	nb_tests = sizeof(source) / sizeof(source[0]);

	i = 0;
	nb = 5;
	while (i < nb_tests)
	{
		printf("\tTest %d\n", i);
		reso = strlcpy(dest, source[i], nb);
		printf("strlcpy:\nCopied '%s' into => '%s'\nLength: '%d'\n", source[i], dest, reso);
		printf("\n");
		result = ft_strlcpy(dest, source[i], nb);
		printf("ft_strlcpy:\nCopied '%s' into => '%s'\nLength: '%d'\n", source[i], dest, result);
		i++;
		nb++;
		if (reso == result)
			printf("[🟢] Success!\n");
		else
			printf("[🔴] Failure.\n");		
		printf("\n-----------------------------------\n");
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