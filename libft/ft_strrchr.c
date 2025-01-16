/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:09:02 by ldummer-          #+#    #+#             */
/*   Updated: 2025/01/16 11:32:51 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns a pointer to the LAST occurrence of the character c in the string s.
char	*ft_strrchr(const char *str, int c)
{
	char	ch;
	char	*result;

	ch = (char) c;
	result = NULL;
	if (ch == '\0')
	{
		while (*str)
			str++;
		return ((char *)str);
	}
	while (*str)
	{
		if (*str == ch)
			result = ((char *)str);
		str++;
	}
	return (result);
}
