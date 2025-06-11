/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 19:36:25 by ldummer-          #+#    #+#             */
/*   Updated: 2025/06/11 09:55:14 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies size bytes from src to dest string
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!dest || !src)
		return (0);
	if (!size)
		return (ft_strlen(src));
	if (size > 0)
	{
		i = 0;
		while (*(src + i) && (i < (size - 1)))
		{
			*(dest + i) = *(src + i);
			++i;
		}
		*(dest + i) = '\0';
	}
	return (ft_strlen(src));
}
