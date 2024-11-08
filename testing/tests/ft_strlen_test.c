/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:07:17 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 20:49:48 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlen_test()
{
	char	*strings[] = {"0123456789", "abcdefghijklmnopqrstuvwxyz"};
	int		nb_tests;
	int		result;
	int		reso;
	char	*str;
	int		i;
	
	printf("\n/===================================\\");
	printf("\n|        Running ft_strlen          |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	nb_tests = sizeof(strings) / sizeof(strings[0]);
	i = 0;
	str = strings[i];
	result = ft_strlen(str);
	reso = strlen(str);
	while(i < nb_tests)
	{
		printf("\nTest %d\n", i);
		if (str == NULL)
		{
			printf("[🔴] Failure: Returned NULL (allocation failed)\n");
		//	return (NULL);
		}
		if (result == reso)
		{
			printf("[🟢] Success: the result matches with the original function.\n");
			printf("     Length of |%s| is |%d|\n", str, result);
		}
		i++;
	}
	printf("\n");
	return (0);
}
