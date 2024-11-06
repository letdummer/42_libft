/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:43:45 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/06 15:32:35 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*ft_conv(int len);
static void			long_to_char(long nb, char *string, int i);
static size_t		ft_len(long nb);

char	*ft_itoa(int n)
{
	char	*string;
	long	nb;
	int		len_n;
	int		i;

	nb = n;
	len_n = ft_len(nb);
	string = ft_conv(len_n);
	if (string == NULL)
		return (NULL);
	i = len_n - 1;
	long_to_char(nb, string, i);
	string[len_n] = '\0';
	return (string);
}

static char	*ft_conv(int len)
{
	char	*str;

	str = (char *)malloc ((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	return (str);
}

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

static void	long_to_char(long nb, char *string, int i)
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
