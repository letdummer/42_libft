/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:10:26 by ldummer-          #+#    #+#             */
/*   Updated: 2024/10/24 16:10:27 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isalnum(int c)
{
    return ((c >= 'a' && c <= 'z')
        || (c >= 'A' && c <= 'Z')
        || (c >= '0' && c <= '9'));
}

int     main(void)
{
    char    chars[] = {'a', '3', '$'};
    int     result;
    int     i = 0;

    while (i < 3)
    {
        result = ft_isalnum(chars[i]);
        if (result)
            printf("%c is alphanum\n", chars[i]);
        else
            printf("%c is not alphanum\n", chars[i]);
        i++;  
        }
        return (0);
}
