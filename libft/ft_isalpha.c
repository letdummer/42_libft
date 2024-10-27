/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_isalpha.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: ldummer- <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/10/24 16:10:32 by ldummer-		  #+#	#+#			 */
/*   Updated: 2024/10/24 16:10:33 by ldummer-		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return 0;
	else
		return 1;
}

int	main(void)
{
	char	 c;
	int	 result;

	c = 'a';
	result = ft_isalpha(c);
	printf("[%d]", result);
	if (result == 0)
		printf("\t[%c] is alphabetic\n", c);
	else
		printf("\t[%c] is not alphabetic\n", c);
	return 0;
}