/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:06:44 by ldummer-          #+#    #+#             */
/*   Updated: 2025/01/16 14:45:54 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_is_space(const char *str);
static const char	*ft_is_signal(const char *str, int *signal);

// The atoi() function converts the initial portion of the string pointed 
// to by str to int representation.
// It returns the converted int value.
int	ft_atoi(const char *str)
{
	int	result;
	int	signal;

	result = 0;
	signal = 1;
	str = ft_is_space(str);
	str = ft_is_signal(str, &signal);
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * signal);
}

// The ft_is_space() function is an auxiliary function that skips all the
// spaces, tabs, newlines, form feeds, carriage returns, and vertical tabs
static const char	*ft_is_space(const char *str)
{
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\f' || *str == '\r' || *str == '\v')
	{
		str++;
	}
	return (str);
}

// The ft_is_signal() function is an auxiliary function that checks if the
// number is negative or positive
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
