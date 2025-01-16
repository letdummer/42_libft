/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:07:55 by ldummer-          #+#    #+#             */
/*   Updated: 2025/01/16 11:20:13 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fills the first n bytes of the memory area pointed to by str 
// with the constant byte c.
void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
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
