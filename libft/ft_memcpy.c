/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:07:47 by ldummer-          #+#    #+#             */
/*   Updated: 2025/01/16 11:18:47 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies n bytes from memory area src to memory area dest.
void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*destin;

	if (dest == NULL && src == NULL)
		return (dest);
	source = (unsigned char *) src;
	destin = (unsigned char *) dest;
	i = 0;
	while (i < count)
	{
		destin[i] = source[i];
		i++;
	}
	return (destin);
}
