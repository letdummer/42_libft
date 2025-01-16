/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:07:51 by ldummer-          #+#    #+#             */
/*   Updated: 2025/01/16 11:19:25 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies n bytes from memory area src to memory area dest. 
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*destin;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	source = (unsigned char *)src;
	destin = (unsigned char *) dest;
	if ((size_t)dest - (size_t)src < n)
	{
		i = n;
		while (--i < n)
			destin[i] = source[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			destin[i] = source[i];
			i++;
		}
	}
	return (destin);
}
