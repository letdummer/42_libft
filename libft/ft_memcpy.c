/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:10:57 by ldummer-          #+#    #+#             */
/*   Updated: 2024/10/24 16:10:58 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdio.h>
//#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t count);

 
int main(void)
{
    char source[ 80 ] = "THIS IS THE SOURCE STRING";
    char target[ 80 ] = "This is the target string";

    printf( "Before, target is:\t \"%s\"\n", target );
    //memcpy( target, source, 15);
    ft_memcpy( target, source, 15);
    printf( "After, target becomes:\t \"%s\"\n", target );
    return (0);
}


void *ft_memcpy(void *dest, const void *src, size_t count)
{
    size_t i;
    const char    *source = src;
    char    *destin = dest;
    
    i = 0;
    while (source[i] != '\0' && i <= count)
    {
        destin[i] = source[i];
        i++;
    }
    return (destin);
}