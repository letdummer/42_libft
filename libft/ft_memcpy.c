/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lethallyn <lethallyn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:43:56 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/07 17:37:05 by lethallyn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t				i;
	unsigned const char	*source;
	unsigned char	*destin;

	if (dest == NULL || src == NULL)
		return (dest);
	source = (unsigned const char *) src;
	destin = (unsigned char *) dest;
	i = 0;
	while (i < count)
	{
		destin[i] = source[i];
		i++;
	}
	return (destin);
}