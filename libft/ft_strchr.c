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

/* char    *ft_strchr(const char *str, int search_str);

int main(void)
{

}

char    *ft_strchr(const char *str, int search_str)
{

} */



int main(void)
{
    char *string = "this is a string";
    const char to_search = 'a';
    char *result;

    result = strchr(string, to_search);
    printf("String after |%c| is:\t \"%s\"\n", to_search, result);
    return (0);
}