/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lethallyn <lethallyn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:45:46 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/05 15:45:47 by lethallyn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
int	ft_tolower(int c);

int	main(void)
{
	int	result;

	result = ft_tolower('A');
	printf("%c\n", result);
	result = ft_tolower('7');
	printf("%c\n", result);
	result = ft_tolower('Z');
	printf("%c\n", result);
	result = ft_tolower('a');
	printf("%c\n", result);
	return (0);
} */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
		return (c);
	}
	else
		return (c);
}
