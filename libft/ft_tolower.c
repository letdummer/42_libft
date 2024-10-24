/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:28:48 by ldummer-          #+#    #+#             */
/*   Updated: 2024/10/21 13:21:32 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


#include <stdio.h>

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
}

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
