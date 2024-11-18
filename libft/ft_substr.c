/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:09:11 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/12 16:09:12 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*newstring;
	size_t	length;

	length = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= length)
		return (ft_calloc(1, sizeof(char)));
	if (len > length - start)
		len = length - start;
	newstring = (char *) ft_calloc(len + 1, sizeof(char));
	if (newstring == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		newstring[i] = s[start + i];
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
