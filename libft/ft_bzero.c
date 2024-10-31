/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:28:45 by ldummer-          #+#    #+#             */
/*   Updated: 2024/10/31 14:28:46 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_bzero(void *s, size_t n);

 int	main(void)
{
	int	size;
	int	str[SIZE];
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
} */

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*c;

	c = s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}
