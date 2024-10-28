/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:43:31 by ldummer-          #+#    #+#             */
/*   Updated: 2024/10/28 14:43:32 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nitems, size_t size);

int	main(void)
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

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = malloc(nitems * size);
	if (ptr == NULL)
		return (NULL);
	while (i < (nitems * size))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
