/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:48:03 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 17:37:01 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "../include/libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

void	ft_strlcat_test()
{
	char		src[][50] = {"this is ", "Hello,"};
	char		dest[100][50] = {"a string!", "world!"};
	size_t		nb[] = {10, 5};
	size_t		result;
	size_t		reso;
	int			nb_tests;
	int			i;
	
	printf("\n/===================================\\");
	printf("\n|        Running ft_strlcat         |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	nb_tests = sizeof(src) / sizeof(src[0]);

	i = 0;
	while (i < nb_tests)
	{
		char		temp_dest[50];
		strcpy(temp_dest, dest[i]);
		
		result = ft_strlcat(temp_dest, src[i], nb[i]);
		reso = strlcat(dest[i], src[i], nb[i]);

		if (result == reso && strcmp(temp_dest, dest[i]) == 0)
		{
			printf("[🟢] Success! Length of the string: %zu\t| ft_strlcat\n", result);
			printf("[🟢] Success! Length of the string: %zu\t| strlcat\n", reso);
		}
		else
		{
			printf("[🔴] Failure.\n");
			printf("Expected length: %zu\t| strlcat\n", reso);
			printf("Obtained length: %zu\t| ft_strlcat\n", result);
		}
		i++;
	}
	printf("\n");
} */