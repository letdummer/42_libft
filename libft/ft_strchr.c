/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:01:32 by ldummer-          #+#    #+#             */
/*   Updated: 2024/10/24 17:01:33 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>

char    *ft_strchr(const char *str, int c);

int main(void)
{
    char *string = "this is a string";
    const char c = 'a';
    char *result;

    result = ft_strchr(string, c);
    printf("String after |%c| is:\t \"%s\"\n", c, result);
    return (0);
}

char    *ft_strchr(const char *str, int c)
{
    int i;
    char    ch;

    i = 0;
    ch = c;
    while (str[i] != '\0' )
    {
        if (str[i] == ch)
        {
            return((char *) &str[i]);
        }
        i++;
    }
    return (NULL);
}