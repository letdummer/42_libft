/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:11:32 by ldummer-          #+#    #+#             */
/*   Updated: 2024/10/24 16:11:33 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <unistd.h>

void    ft_putendl_fd(char *s, int fd);

int main(void)
{
    char    *string = "this is a string!";

    ft_putendl_fd(string, 1);
    return (0);
}

void    ft_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
    {
    while (s[i] != '\0' && s != NULL)
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd, "\n", 1);
    }
}
