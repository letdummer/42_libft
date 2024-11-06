/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:24:36 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/06 13:30:55 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_test(void)
{
	printf("ORIGINAL: atoi: %d\n", atoi("   + 123 "));
	printf("CREATED: atoi: %d\n", ft_atoi("   + 123 "));
	printf("\n");
	printf("ORIGINAL: atoi: %d\n", atoi("   -123"));
	printf("CREATED: atoi: %d\n", ft_atoi("   -123"));
	printf("\n");
	printf("ORIGINAL: atoi: %d\n", atoi("-999999999999"));
	printf("CREATED: atoi: %d\n", ft_atoi("-999999999999"));
	printf("\n");
	printf("ORIGINAL: atoi: %d\n", atoi("-2147483648"));
	printf("CREATED: atoi: %d\n", ft_atoi("-2147483648"));
	printf("\n");
	printf("ORIGINAL: atoi: %d\n", atoi("2147483647"));
	printf("CREATED: atoi: %d\n", ft_atoi("2147483647"));
	return (0);
}