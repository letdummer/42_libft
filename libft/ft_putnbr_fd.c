/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lethallyn <lethallyn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:44:09 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/05 15:54:24 by lethallyn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	ft_putnbr_fd(0, 1);
	printf("\n");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");
	ft_putnbr_fd(42, 1);
	printf("\n");
	ft_putnbr_fd(-42, 1);
	printf("\n");
	return (0);
} */

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(-n);
	}
	else
		nbr = (unsigned int)n;
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	ft_putchar_fd((char)(nbr % 10 + 48), fd);
}

/* void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
 */