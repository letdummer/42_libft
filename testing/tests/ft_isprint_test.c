/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:15:34 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 20:53:50 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

int ft_isprint_test(void) 
{
	int	chars[] = {'a', '0', '#', '?', 128, 8};
	int nb_tests;
	int	i;
	int	ch;
	int	res;
	
	printf("\n/===================================\\");
	printf("\n|        Running ft_isprint         |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");
	
	nb_tests = sizeof(chars) / sizeof(chars[0]);
	i = - 1;
	while (++i <= nb_tests)
	{
		printf("\nTest %d\n", i);
		ch = chars[i];
		res = ft_isprint(ch);
		if (res > 0)
			res = 1;
		if (res == ft_isprint(ch))
			printf("[🟢] Success: Input %c validated.\n", ch);

		else
		{
			printf("[🔴] Failure: Input %c did not pass. ASCII: %d\n", ch, ch);
			printf("Expected: %d\tResult: %d\n", res, ft_isprint(ch));
		}
	}
		
	printf("\n");
	return (0);
}
