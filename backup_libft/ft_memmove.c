/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memmove.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: ldummer- <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/10/24 16:35:57 by ldummer-		  #+#	#+#			 */
/*   Updated: 2024/10/24 16:35:58 by ldummer-		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

//#include "libft.h"

//#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t count);

int	main(void)
{
	char		dest_str[] = "123456";
	const char	src_str[] = "abcdef";

	printf("Before memmove dest = %s, src = %s\n", dest_str, src_str);
	ft_memmove(dest_str, src_str, 3);
	printf("After memmove dest = %s, src = %s\n", dest_str, src_str);
	return (0);
}

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	const char	*source;
	char		*destin;
	size_t		i;

	source = src;
	destin = dest;
	i = 0;
	while (source[i] != '\0' && i < count)
	{
		destin[i] = source[i];
		i++;
	}
	return (destin);
}
