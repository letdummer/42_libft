/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:21:46 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/08 20:50:17 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

static void	ft_transform(unsigned int i, char *c);

void		ft_striteri_test()
{
	char	chars[][20] = {
		"",
		"A",
		"Hello World!",
		};

	int			nb_tests;
	int			i;
	char		*ch;

	printf("\n/===================================\\");
	printf("\n|        Running ft_striteri        |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	nb_tests = sizeof(chars) / sizeof(chars[0]);
	i = 0;
    while (i < nb_tests)
	{
		ch = chars[i];
		ft_striteri(ch, ft_transform);
		
		printf("Test %d\n", i);
		printf("\tORIGINAL_________ |%s|\n", chars[i]);
		printf("\tTRANSFORMED______ |%s|\n", ch);
		printf("[🟢] Success: %s\n\n", ch);
		i++;
	}
	
	printf("\n");
}

static void	ft_transform(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = '#';
}