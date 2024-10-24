/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:12:05 by ldummer-          #+#    #+#             */
/*   Updated: 2024/10/24 16:12:06 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

int main(void)
{
    char    *source = "this is a string";
    char    dest[50];
    int     r;

    r = strlcpy(dest, source, 5);
    printf("ORIGINAL:\nCopied '%s' into '%s'\nLength: '%d'\n", source, dest, r);
    printf("\n");
    r = ft_strlcpy(dest, source, 5);
    printf("CREATED:\nCopied '%s' into '%s'\nLength: '%d'\n", source, dest, r);
    return(0);
}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    unsigned int i;

    i = 0;
    if (dstsize > 0)
    {
        while (*(src + i) != '\0')
        {
            if (i == dstsize)
            {
                i--;
                break;
            }
            *(dst + i) = *(src + i);
            i++;
        }
    }
    *(dst + i) = '\0';
    while (*(src + i) != '\0')
        i++;
    return (i);
}
