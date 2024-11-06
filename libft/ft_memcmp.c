/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memcmp.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: lethallyn <lethallyn@student.42.fr>		+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/11/05 15:43:53 by lethallyn		 #+#	#+#			 */
/*   Updated: 2024/11/05 20:31:39 by lethallyn		###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"
 
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*string1;
	const unsigned char	*string2;
	size_t				i;

	string1 = (const unsigned char *)str1;
	string2 = (const unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (string1[i] != string2[i])
			return (string1[i] - string2[i]);
		i++;
	}
	return (0);
}
