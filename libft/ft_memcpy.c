/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:43:56 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/09 14:56:35 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

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
