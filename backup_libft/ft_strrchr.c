/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:30:24 by ldummer-          #+#    #+#             */
/*   Updated: 2024/10/28 14:30:25 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdio.h>

char	*ft_strrchr(const char *str, int c);

int	main(void)
{
	const char	str[] = "this is a string";
	const char	ch = 's';
	char		*res;

	res = ft_strrchr(str, ch);
	printf("Last occurency of |%c| is:\t \"%s\"\n", ch, res);
	return (0);
}

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	ch;
	char	*result;

	i = 0;
	ch = (char) c;
	result = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			result = (char *) &str[i];
		i++;
	}
	return (result);
}
