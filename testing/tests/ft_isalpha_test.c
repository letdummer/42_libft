/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:48:03 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 20:54:00 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

int	ft_isalpha_test(void)
{	
	int chars[] = {'a', 'A', 'z', 'Z', '0', '?', '#', 128};
	int res;
	int i;
	int	nb_tests;
	int	ch;
	int	expected;
	
	printf("\n/===================================\\");
	printf("\n|        Running ft_isalpha         |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	nb_tests = sizeof(chars) / sizeof(chars[0]);
	i = 0;
	while (i < nb_tests)
	{
		printf("\nTest %d\n", i);
		ch = chars[i];
		expected = (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
		res = ft_isalpha(ch);
		if (res != 0)
		{
			res = 1;
		}
		if (res == expected)
			printf("[🟢] Success: Input %c validated.\n", ch);
		else
		{
			printf("[🔴] Failure: Input %c did not pass. ASCII: %d\n", ch, ch);
			printf("Expected: %d\tResult: %d\n", expected, res);
		}
		
		i++;
	}
	printf("\n");
	return (0);
}
