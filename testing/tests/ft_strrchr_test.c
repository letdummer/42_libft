/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:40:20 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 21:05:10 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr_test()
{
	char	*strings[] = {
		"there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0",
		"another example with no nulls",
		"simple test with letter s",
		"no matching character here"
		};
	char			chars[] = {'\0', 'e', 's', 'x'};
	char		*result;
	char		*reso;
	int			nb_tests;
	int			i;
	char		*str;
	char		ch;

	printf("\n/===================================\\");
	printf("\n|        Running ft_strrchr         |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	i = 0;
	nb_tests = sizeof(strings) / sizeof(strings[0]);
	while (i < nb_tests)
	{	
		str = strings[i];
		ch = chars[i];
		printf("Test %d\n", i);
		reso = strrchr(str, ch);
		printf("strrhr:\t\tLast occurency of |%c| is: |%s|\n", ch, reso);
		result = ft_strrchr(str, ch);
		printf("ft_strrchr:\tLast occurency of |%c| is: |%s|\n", ch, result);
		if (reso == NULL && result == NULL)
		{
			printf("[🟢] Success: Both functions returned NULL when character '%c' was not found.\n", chars[i]);
		}
		else if ((result != NULL && reso != NULL) && (strcmp(result, reso) == 0))
		{
			printf("[🟢] Success! Character '%c' found in \"%s\":\n\tstrrchr: \"%s\"\n\tft_strrchr: \"%s\"\n", 
				chars[i], strings[i], reso, result);
		}
		else
		{
			printf("[🔴] Failure: Results do not match for character '%c' in \"%s\".\n", chars[i], strings[i]);
			printf("\tstrrchr: \"%s\"\n\tft_strrchr: \"%s\"\n", reso, result);
		}
		printf("\n");	
		i++;
	}
	printf("\n");	
	return (0);
}
