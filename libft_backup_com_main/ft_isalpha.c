/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lethallyn <lethallyn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:43:24 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/05 15:43:25 by lethallyn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

/* int	main(void)
{
	int	c = 'a';
	int result;

	while (c <= 'z')
	{
	result = ft_isalpha(c);
	printf("%d", result);
	c++;
	}
	return (0);
} */