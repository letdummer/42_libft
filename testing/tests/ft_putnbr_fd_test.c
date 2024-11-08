/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:37:03 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 20:50:46 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <limits.h>

void	ft_putnbr_fd_test()
{
	int		chars[] = {INT_MAX, INT_MIN, '0', -4, '4'};
	int		nb_tests;
	int		i;
	char	ch;

	printf("\n/===================================\\");
	printf("\n|        Running ft_putnbr          |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");
	
	nb_tests = sizeof(chars) / sizeof(chars[0]);
	i = 0;
	while (i < nb_tests)
	{
		printf("\nTest %d\n", i);
		ch = chars[i];

			//printf("[🔴] Failure: returned NULL (allocation failed)\n", ch);			

			ft_putnbr_fd(ch, 1);
			printf("[🟢] Success: %d\n", ch);
		printf("\n");
		i ++;
	}
	
	printf("\n");
}
