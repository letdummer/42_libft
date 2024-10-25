/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:11:54 by ldummer-          #+#    #+#             */
/*   Updated: 2024/10/24 16:11:55 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char *s, int fd);

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

int     main(void)
{
    char    *str = "abcd";

    ft_putstr_fd(str, 1); 
    return (0);
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
