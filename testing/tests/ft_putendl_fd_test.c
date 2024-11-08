/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:12:41 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 20:51:13 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

void	ft_putendl_fd_test()
{
	char	*chars[] = {
		"Hello, Wordl!",
		"Olá, mundo!",
		"Привет, мир!",
		NULL
		};
	int		nb_tests;
	int		i;
	char	*ch;
		
	printf("\n/===================================\\");
	printf("\n|        Running ft_putendl         |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	nb_tests = sizeof(chars) / sizeof(chars[0]);
	i = 0;
	while (i < nb_tests)
	{
		printf("\nTest %d\n", i);
		ch = chars[i];

			ft_putendl_fd(ch, 1);
			printf("[🟢] Success: %s\n", ch);
		i++;
	}
	printf("\n");
}
