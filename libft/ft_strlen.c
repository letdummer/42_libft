/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:08:46 by ldummer-          #+#    #+#             */
/*   Updated: 2025/06/11 09:56:18 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Calculates the length of the string str, excluding the null-terminator.
size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
