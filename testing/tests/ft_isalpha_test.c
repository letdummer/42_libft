/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:48:03 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/06 13:31:19 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

int	ft_isalpha_test(void)
{	
	int chars[] = {'a', 'A', 'z', 'Z', '0', -1, '?', '#', 128};
	int res;
	int i;
	int	nb_tests;
	int	ch;
	
	printf("\n/===================================\\");
	printf("\n|        Running ft_isalpha()       |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	nb_tests = sizeof(chars) / sizeof(chars[0]);
	i = -1;
	while (++i <= nb_tests)
	{
		ch = chars[i];
		res = ft_isalpha(ch);
		if (res > 0)
			res = 1;
		if (res == ft_isalpha(ch))
			printf("[🟢] Success: Input %c validated. ASCII: %d\n", ch, ch);
		else
		{
			printf("[🔴] Failure: Input %c did not pass. ASCII: %d\n", ch, ch);
			printf("Expected: %d\tResult: %d\n", res, ft_isalpha(ch));
		}	
	}
	printf("\n");
	return (0);
}
