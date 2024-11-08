/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:29:37 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 20:53:45 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa_test()
{
	int		chars[] = {123, -456, 0, 2147483647, -2147483648};
	int		nb_tests = sizeof(chars) / sizeof(chars[0]);
	char	*result;
	int		i;
	int	ch;

	printf("\n/===================================\\");
	printf("\n|        Running ft_itoa            |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");
	i = - 1;
	while (++i < nb_tests)
	{
		printf("\nTest %d\n", i);
		ch = chars[i];
		result = ft_itoa(ch);
		if (result != NULL)
		{
			printf("[🟢] Success: ft_itoa(%d) = \"%s\"\n", ch, result);
			free(result);
		}
		else
		{
			printf("[🔴] Failure: ft_itoa(%d) returned NULL (allocation failed)\n", ch);
		}
	}
	printf("\n");
	return (0);
}
