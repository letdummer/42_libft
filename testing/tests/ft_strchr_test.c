/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:04:13 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 21:18:50 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <string.h>
 
char	*ft_strchr_test()
{
	char		*strings[] = {"this is a string", "another string"};
	char		to_find[] = {'a', '\0'};
	char		*result;
	char		*reso;
	char		*ch;
	char			c;
	int			nb_tests;
	int			i;

	printf("\n/===================================\\");
	printf("\n|        Running ft_strchr          |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	nb_tests = sizeof(strings) / sizeof(strings[0]);
	i = 0;
	while (i < nb_tests)
	{
		printf("\nTest %d\n", i);
		ch = strings[i];
		c = to_find[i];
		if (ch == NULL)
		{
			return (NULL);
			printf("[🔴] Failure: Returned NULL (allocation failed)\n");
		}
		result = ft_strchr(ch, c);
		reso = strchr(ch, c);

		printf("Character to be located: |%d| in |%s|\n", c, ch);
		printf("Using ft_strchr:\t%s", result);
		printf("Using strchr:\t%s", reso);
		if (result == reso)
		{
			printf("[🟢] Success: String after |%d| is:\t |%s|\n", c, result);
			i++;
		}
		else
			printf("[🔴] Failure: the test doesn't match with the original function.\n");
	}	
	printf("\n");
	return (0);
}
