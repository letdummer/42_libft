/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:39:38 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/06 17:04:57 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <stddef.h>

void	*ft_memchr_test()
{
	const char	*strings[] = {"This is a string!", 
				"012345689", 
				"searching-for-something [...]", 
				"my_internet_provider_is-WTF!"};
	char	ch[] = {'a', '5', ' ', '-'};
	char	*result;
	const char	*s;
	char	c;
	int		i;
	int		nb_tests;

	printf("\n/===================================\\");
	printf("\n|        Running ft_memchr()       |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");
	
	nb_tests = sizeof(strings) / sizeof(strings[0]);
	
	i = 0;
	while (i < nb_tests)
	{
		s = strings[i];
		c = ch[i];
		result = ft_memchr(s, c, 25);
		if (result == NULL)
		{				
			printf("[🔴] Failure: the character |%c| cound't be find "
				"until the |%d| position of the string.\n", c, 10);
			printf("\t\nString: %s\n\n", strings[i]);
		}
		else
		{
			printf("[🟢] Success: the string after |%c| is |%s|\n", c, result);
			printf("\t\nString: %s\n\n", strings[i]);
		}
		i++;
	}
	printf("\n");
	return (0);
}
