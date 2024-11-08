/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:47:19 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 20:50:41 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

void	ft_putstr_fd_test()
{
	char	*chars[] = { "", NULL, "this is a string"};
	int		nb_tests;
	int		i;
	char	*ch;
	
	printf("\n/===================================\\");
	printf("\n|        Running ft_putstr          |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	nb_tests = sizeof(chars) / sizeof(chars[0]);

	i = 0;
	while (i < nb_tests)
	{
		printf("\nTest %d\n", i);
		ch = chars[i];

		if (ch == NULL)
			printf("[🔴] Failure: Returned NULL (allocation failed)\n");
		else
		{
			ft_putstr_fd(ch, 1);
			printf("[🟢] Success: %s\n", ch);
		}
		i++;
	}
	printf("\n");
}
