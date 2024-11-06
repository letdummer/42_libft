/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:25:23 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/06 16:31:23 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

int	ft_isalnum_test(void)
{
	int	chars[] = {'0', '9', -1, 'a', 'Z', '#'};
	int	nb_tests;
	int i;
	int ch;
	int	res;

	printf("\n/===================================\\");
	printf("\n|        Running ft_isalnum()       |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");
	
	nb_tests = sizeof(chars) / sizeof(chars[0]);
	i = - 1;
	while (++i <= nb_tests)
	{
		ch = chars[i];
		res = ft_isalnum(ch);
		if (res > 0)
			res = 1;
		if (res == ft_isalnum(ch))
			printf("[🟢] Success: Input %c validated. ASCII: %d\n", ch, ch);
		else
		{
			printf("[🔴] Failure: Input %c did not pass. ASCII: %d\n", ch, ch);
			printf("Expected: %d\tResult: %d\n", res, ft_isalnum(ch));
		}
	}
	printf("\n");
	return (0);
}
