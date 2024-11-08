/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:24:36 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/08 19:40:35 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_atoi_test()
{
	char	*strings[] = {
		"   + 123 ",
		"   -123 ",
		"-999999999999",
		"-2147483648",
		"2147483647"
		};
	int	nb_tests;
	int	i;
	int	result;
	int	reso;
	char	*str;

	printf("\n/===================================\\");
	printf("\n|        Running ft_isalpha         |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	nb_tests = sizeof(strings) / sizeof(strings[0]);
	i = 0;
	while (i < nb_tests)
	{
		str = strings[i];
		reso = atoi(str);
		result = ft_atoi(str);
		printf("Test %d\n", i);
		printf("ORIGINAL: atoi:\t\t%d\n", reso);
		printf("CREATED:  ft_atoi:\t%d\n", result);
		if (result == reso)
		{
			printf("[🟢] Success: the result matches the original function.\n");
		}
		else
			printf("[🔴] Failure: Input %s did not pass.\n", str);
		printf("\n");
		i++;		
	}
	printf("\n");
}
