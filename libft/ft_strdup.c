/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:08:25 by ldummer-          #+#    #+#             */
/*   Updated: 2025/01/16 11:23:11 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates sufficient memory for a copy of the string s1,
// does the copy, and returns a pointer to it.
char	*ft_strdup(const char *str1)
{
	char	*new_string;
	size_t	i;

	new_string = (char *) malloc (ft_strlen(str1) + 1);
	if (!new_string)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		new_string[i] = str1[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
