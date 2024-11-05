/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lethallyn <lethallyn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:24:57 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/05 21:25:56 by lethallyn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

int	*ft_calloc(void)
{
	int		n;
	int		i;
	int		*array;
	size_t	large_n;

	n = 5;
	i = 0;
	large_n = SIZE_MAX;
	array = (int *) ft_calloc(n, sizeof(int));
	if (array == NULL)
	{
		printf("Memory allocation failed!\n");
		return (1);
	}
	printf("Array elements after calloc: ");
	while (i < n)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	free(array);
	array = (int *) ft_calloc(large_n, sizeof(int));
	if (array == NULL)
		printf("Memory allocation failed!\n");
	else
	{
		printf("Unexpected allocation success!\n");
		free(array);
	}
	return (0);
}