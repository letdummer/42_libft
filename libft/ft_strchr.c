/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:45:08 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/08 13:04:02 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	ch;

	ch = (char)c;
	while (*str != '\0' )
	{
		if (*str == ch)
		{
			return ((char *)str);
		}
		str++;
	}
	if (ch == '\0')
		return ((char *) str);
	return (NULL);
}
