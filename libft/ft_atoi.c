/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:10:14 by ldummer-          #+#    #+#             */
/*   Updated: 2024/10/24 16:10:16 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h> //COMENTAR OU RETIRAR FUNCAO ORIGINAL

int ft_atoi(const char *str);

int main(void)
{
    char    *string = "";
    int     result;
    int     result2;

    result = ft_atoi(string);
    result2 = atoi(string);
    
    printf("%i\n", result);
    printf("%i\n", result2);
    return (0);
}

int ft_atoi(const char *str)
{
    int i;
    int result;
    int signal;

    i = 0;
    result = 0;
    signal = 1;
    if (str == NULL)
        return (2);
    
    while (str[i] == ' ')
    {
        i++;
    }
    if (str[i] == '-')
    {
        if (str[i + 1] == '-' || str[i + 1] == '+')
        {
            return (0);
        }
        signal *= -1;
        i++;
    }
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + str[i] - '0';
        }
        else
            return (result * signal);
        i++;
    }
    return (result * signal);
}
