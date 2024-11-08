/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:52:43 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 20:53:54 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

int	ft_isdigit_test(void)
{
	int	chars[] = {'0', '1', '2', '9', 'z', '?'};
	int	res;
	int i;
	int ch;
	int nb_tests;

	nb_tests = sizeof(chars) / sizeof(chars[0]);
	printf("\n/===================================\\");
	printf("\n|        Running ft_isdigit         |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");
	i = -1;
	while (++i <= nb_tests)
	{
		printf("\nTest %d\n", i);
		ch = chars[i];
		res = ft_isdigit(ch);
		if (res > 0)
			res = 1;
		if (res == ft_isdigit(ch))
			printf("[🟢] Success: Input %c validated.\n", ch);
		else
		{
			printf("[🔴] Failure: Input %c did not pass. ASCII: %d\n", ch, ch);
			printf("Expected: %d\tResult: %d\n", res, ft_isdigit(ch));	
		}
	}	
	printf("\n");
	return (0);
}
