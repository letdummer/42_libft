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
 
int	ft_memcmp(const void *str1, const void *str2, size_t n);
/* 
int	main(void)
{
	char	*str1;
	char	*str2;
	int		result;
	int		res;

	// Test case 1: Compare identical strings
	str1 = "Hello";
	str2 = "Hello";
	result = ft_memcmp(str1, str2, 5);
	printf("Test 1: Both strings 'Hello': %d (expected 0)\n", result);
	res = memcmp(str1, str2, strlen(str1));
	printf("Test 1: Both strings 'Hello': %d (expected 0)\n", res);
	printf("\n");

	// Test case 2: Compare different strings
	str1 = "Hello";
	str2 = "Hellz";
	result = ft_memcmp(str1, str2, 5);
	printf("Test 2: Compare 'Hello' and 'Hellz': %d (expected <0)\n", result);
	res = memcmp(str1, str2, strlen(str1));
	printf("Test 2: Compare 'Hello' and 'Hellz': %d (expected <0)\n", result);
	printf("\n");

	// Test case 3: Compare strings of different lengths
	str1 = "Hello";
	str2 = "Hello, World!";
	result = ft_memcmp(str1, str2, 5);
	printf("Test 3: Compare 'Hello' and 'Hello, World!': %d (expected 0)\n", result);
	res = memcmp(str1, str2, strlen(str1));
	printf("Test 3: Compare 'Hello' and 'Hello, World!': %d (expected 0)\n", result);
	printf("\n");
	return (0);
} */

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
