/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:10:21 by ldummer-          #+#    #+#             */
/*   Updated: 2024/10/24 16:10:22 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdio.h>
//#include <strings.h>

void    ft_bzero(void *s, size_t n);

int main(void)
{
    int size = 9;
    int array[size];

  //  bzero(array, sizeof(array));
    ft_bzero(array, sizeof(array));

    int i = 0;
    while (i < size)
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n"); 
    return (0);
}

void    ft_bzero(void *s, size_t n)
{
    size_t i;
    char *c = s;
    i = 0;
    while (i < n)
    {
        c[i] = '\0';
        i++;
    }
}
