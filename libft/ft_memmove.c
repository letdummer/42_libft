/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:43:59 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/06 17:12:10 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char	*source;
	unsigned char	*destin;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	source = (unsigned char *)src;
	destin = (unsigned char *) dest;
	if ((size_t)dest - (size_t)src < count)
	{
		i = count;
		while (--i < count)
			destin[i] = source[i];
	}
	else
	{
		i = -1;
		while (++i < count)
			destin[i] = source[i];
	}
	return (destin);
}
