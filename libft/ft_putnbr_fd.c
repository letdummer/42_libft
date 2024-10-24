/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:11:46 by ldummer-          #+#    #+#             */
/*   Updated: 2024/10/24 16:11:47 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd);

void    ft_putchar_fd(char c, int fd);

void    ft_putstr_fd(char *s, int fd);

int     main(void)
{
        int     n;
        int     n2;

        n = -2147483648;
        n2 = 42;
        ft_putnbr_fd(n, 1);
        printf("\n");
        ft_putnbr_fd(n2, 1);
        return (0);
}

void    ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(n * -1);
	}
	else
		nbr = (unsigned int)n;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10 + 48), fd);
}

void    ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}

void    ft_putstr_fd(char *s, int fd)
{
        int i = 0;

        while (s[i])
        {
                ft_putchar_fd(s[i], fd);
                i++;
        }
}
