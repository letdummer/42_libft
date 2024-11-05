/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lethallyn <lethallyn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:42:55 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/05 21:19:45 by lethallyn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static const char	*ft_is_space(const char *str);
static const char	*ft_is_signal(const char *str, int *signal);

int	ft_atoi(const char *str)
{
	int	result;
	int	signal;

	result = 0;
	signal = 1;
	if (str == NULL)
		return (0);
	str = ft_is_space(str);
	str = ft_is_signal(str, &signal);
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * signal);
}

static const char	*ft_is_space(const char *str)
{
	while (*str == ' ' || *str == '\n' || *str == '\t'
		||*str == '\f' || *str == '\r' || *str == '\v')
		str++;
	return (str);
}

static const char	*ft_is_signal(const char *str, int *signal)
{
	if (*str == '-')
	{
		*signal = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	return (str);
}
