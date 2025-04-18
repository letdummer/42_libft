/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 19:30:25 by ldummer-          #+#    #+#             */
/*   Updated: 2025/03/23 22:47:10 by ldummer-         ###   ########.fr       */
/*		                                                                    */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n, int base)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= base;
		len++;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	int	len;

	len = ft_numlen(n, 10);
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		return (len + 1);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n *= -1;
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar_fd(n % 10 + '0', 1);
	}
	else
		ft_putchar(n + '0');
	return (len);
}
