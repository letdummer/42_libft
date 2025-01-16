/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:07:33 by ldummer-          #+#    #+#             */
/*   Updated: 2025/01/16 11:16:41 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*ft_alloc_str(int len);
static void			ft_long_to_char(long nb, char *string, int i);
static size_t		ft_len(long nb);

// This function converts an integer to a string.
char	*ft_itoa(int n)
{
	char	*string;
	long	nb;
	int		len_n;
	int		i;

	nb = n;
	len_n = ft_len(nb);
	string = ft_alloc_str(len_n);
	if (string == NULL)
		return (NULL);
	i = len_n - 1;
	ft_long_to_char(nb, string, i);
	string[len_n] = '\0';
	return (string);
}

// This is an auxiliary function that allocates memory
static char	*ft_alloc_str(int len)
{
	char	*str;

	str = (char *)malloc ((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	return (str);
}

// This is an auxiliary function that calculates the length of the number
static size_t	ft_len(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

// This is an auxiliary function that converts a long number to a string
static void	ft_long_to_char(long nb, char *string, int i)
{
	if (nb == 0)
		string[0] = '0';
	else
	{
		if (nb < 0)
		{
			string[0] = '-';
			nb = -nb;
		}
		while (nb > 0)
		{
			string[i--] = ((nb % 10) + '0');
			nb = nb / 10;
		}
	}
}
