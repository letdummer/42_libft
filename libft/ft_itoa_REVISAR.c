/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:29:34 by ldummer-          #+#    #+#             */
/*   Updated: 2024/10/28 13:29:35 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char		*ft_itoa(int n);
static char	*ft_conv(int len);

size_t		ft_len(long nb);

int	main(void)
{
	int		value = -1234567;
	char	*result;

	result = ft_itoa(value);
	printf("%s\n", result);
	return (0);
}

char	*ft_itoa(int n)
{
	int		len_n;
	int		i;
	char	*string;
	long	nb;

	nb = n;
	len_n = ft_len(nb);
	string = ft_conv(len_n);
	if (string == NULL)
		return (NULL);
	i = len_n - 1;
	if (nb == 0)
		string[0] = '0';
	else
	{
		if (nb < 0)
			nb = -nb;
		while (nb > 0)
		{
			string[i] = ((nb % 10) + '0');
			nb = nb / 10;
			i--;
		}
		if (n < 0)
			string[0] = '-';
	}
	string[len_n] = '\0';
	return (string);
}
static char	ft_convert()
{
	
}

static char	*ft_conv(int len)
{
	char	*str;

	str = (char *)malloc ((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	return (str);
}

size_t	ft_len(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	if (nb == 0)
		i++;
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}
