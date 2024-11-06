/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:45:24 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/06 11:22:19 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);

int	main(void)
{
	char	*source = "this is a string";
	char	dest[50];
	int		r;

	r = strlcpy(dest, source, 5);
	printf("ORIGINAL:\nCopied '%s' into '%s'\nLength: '%d'\n", source, dest, r);
	printf("\n");
	r = ft_strlcpy(dest, source, 5);
	printf("CREATED:\nCopied '%s' into '%s'\nLength: '%d'\n", source, dest, r);
	return (0);
} */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

		i = 0;
	if (dstsize == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	if (dstsize > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
