/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lethallyn <lethallyn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:43:38 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/05 15:43:39 by lethallyn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/* int	main(void)
{
	int i = 'a';
	int result;

	while (i <= 'z')
	{
		result = ft_isdigit(i);
		printf("%d", result);
		i++;
	}
} */