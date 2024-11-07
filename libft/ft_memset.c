/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lethallyn <lethallyn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:44:01 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/07 18:47:33 by lethallyn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	unsigned char	*string;

	i = 0;
	string = (unsigned char *)str;
	while (i < n)
	{
		string[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
