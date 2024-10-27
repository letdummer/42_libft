/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_isascii.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: ldummer- <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/10/24 16:10:37 by ldummer-		  #+#	#+#			 */
/*   Updated: 2024/10/24 16:10:38 by ldummer-		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

int	 ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return(0);

	}
}

int	 main(void)
{
	char	ch1 = 'a';
	char	ch2 = 'é';
	char	ch3 = 'ñ';
	ft_isascii(ch1);
	ft_isascii(ch2);
	ft_isascii(ch3);
	return (0);
}