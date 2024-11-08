/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:39:38 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 20:53:40 by ldummer-         ###   ########.fr       */
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
				"my_internet_provider_is-WTF!",
				""
				};
	char	ch[] = {'a', '5', ' ', '-', '-'};
	const char	*s;
	char	*result;
	int		nb_tests;
	int		i;
	char	c;

	printf("\n/===================================\\");
	printf("\n|        Running ft_memchr          |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");
	
	nb_tests = sizeof(strings) / sizeof(strings[0]);
	
	i = 0;
	while (i < nb_tests)
	{
		printf("\nTest %d\n", i);
		s = strings[i];
		c = ch[i];
		result = ft_memchr(s, c, 25);
		printf("\tString: %s\n\n", s);
		if (!result)
		{				
			printf("[🔴] Failure: the character |%c| couldn't be found "
				"within the first |%d| characters of the string.\n", c, 10);
		}
		else
		{
			printf("[🟢] Success: the string after |%c| is |%s|\n", c, result);
		}
		i++;
	}
	printf("\n");
	return (0);
}
