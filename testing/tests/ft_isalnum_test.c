/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:25:23 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 20:54:05 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

void	ft_isalnum_test()
{
	char	chars[] = {'0', '9', 'a', 'Z', '#', '?'};
	int	nb_tests;
	int i;
	char ch;
	int	res;
	int	expected;

	printf("\n/===================================\\");
	printf("\n|        Running ft_isalnum         |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");
	
	nb_tests = sizeof(chars) / sizeof(chars[0]);
	i = 0;
	while (i < nb_tests)
	{
		printf("\nTest %d\n", i);
		ch = chars[i];
		expected = (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
		res = ft_isalnum(ch);

		if (res == expected)
			printf("[🟢] Success: Input %c validated. ASCII: %d\n", ch, (int)ch);
		else
		{
			printf("[🔴] Failure: Input %c did not pass. ASCII: %d\n", ch, (int)ch);
			printf("Expected: %d\tResult: %d\n", expected, res);
		}
		i++;
	}
	printf("\n");
}
