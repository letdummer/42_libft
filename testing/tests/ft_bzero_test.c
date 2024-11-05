/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lethallyn <lethallyn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:21:18 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/05 21:22:49 by lethallyn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

int	bzero_test(void)
{
	int	size;
	int	str[50];
	int	i;

	i = 0;
	size = 9;
	ft_bzero(str, sizeof(str));
	while (i < size)
	{
		printf("%d ", str[i]);
		i++;
	}
	printf("\n");
	return (0);
} 