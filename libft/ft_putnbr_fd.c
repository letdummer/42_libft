/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lethallyn <lethallyn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:44:09 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/07 21:57:24 by lethallyn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <limits.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main(void)
{
	ft_putnbr_fd(INT_MIN, 1);
	printf("\n");
	ft_putnbr_fd(INT_MAX, 1);
	printf("\n");

	ft_putnbr_fd(42, 1);
	printf("\n");
	ft_putnbr_fd(-42, 1);
	printf("\n");
	ft_putnbr_fd(0, 1);
	printf("\n");
	ft_putnbr_fd(-1, 1);
	printf("\n");
	return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n == INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10 + '0'), fd);
}

