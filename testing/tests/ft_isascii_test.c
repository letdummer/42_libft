/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:39:56 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 20:53:57 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

int	ft_isascii_test(void)
{
	int	chars[] = {'a', 'A', '0', '9', 'z', 'Z', 7, 8, 9, 33, '!', 128};
	int	res;
	int	i;
	int	ch;
	int	nb_tests;
	int	expected;
	
	printf("\n/===================================\\");
	printf("\n|        Running ft_isascii         |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");	
	nb_tests = sizeof(chars) / sizeof(chars[0]);
	i = 0;
	while (i < nb_tests)
	{
		printf("\nTest %d\n", i);
		ch = chars[i];
		expected = (ch >= 0  && ch <= 127);
		res = ft_isascii(ch);
		if (res > 0)
			res = 1;
		if (res == expected)
			printf("[🟢] Success: Input %c validated. ASCII: %d\n", ch, ch);
		else
		{	printf("[🔴] Failure: Input %c did not pass. ASCII: %d\n", ch, ch);
			printf("Expected: %d\tResult: %d\n", expected ,res);
		}
		i++;
	}
	
	printf("\n");
	return (0);
}
