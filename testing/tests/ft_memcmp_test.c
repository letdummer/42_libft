#include "../include/libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp_test(void)
{
	char	*str1;
	char	*str2;
	int		result;
	int		res;

	printf("\n/===================================\\");
	printf("\n|        Running ft_memcmp()       |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n\n");

	str1 = "Hello";
	str2 = "Hello";
	result = ft_memcmp(str1, str2, 5);
	printf("ft_memcmp: Both strings 'Hello': %d (expected 0)\n", result);
	res = memcmp(str1, str2, strlen(str1));
	printf("memcmp: Both strings 'Hello': %d (expected 0)\n", res);
	if (result == res)
		printf("[🟢] Success!\n");
	else
		printf("[🔴] Failure.\n");
	printf("\n");

	str1 = "Hello";
	str2 = "Hellz";
	result = ft_memcmp(str1, str2, 5);
	printf("ft_memcmp: : Compare 'Hello' and 'Hellz': %d (expected <0)\n", result);
	res = memcmp(str1, str2, strlen(str1));
	printf("memcmp: Compare 'Hello' and 'Hellz': %d (expected <0)\n", result);
	if (result == res)
		printf("[🟢] Success!\n");
	else
		printf("[🔴] Failure.\n");
	printf("\n");

	str1 = "Hello";
	str2 = "Hello, World!";
	result = ft_memcmp(str1, str2, 5);
	printf("ft_memcmp: : Compare 'Hello' and 'Hello, World!': %d (expected 0)\n", result);
	res = memcmp(str1, str2, strlen(str1));
	printf("memcmp: Compare 'Hello' and 'Hello, World!': %d (expected 0)\n", result);
	if (result == res)
		printf("[🟢] Success!\n");
	else
		printf("[🔴] Failure.\n");
	
	str1 = "Hello!";
	str2 = "Hello?";
	result = ft_memcmp(str1, str2, 7);
	printf("ft_memcmp: : Compare 'Hello' and 'Hello, World!': %d (expected 0)\n", result);
	res = memcmp(str1, str2, strlen(str1));
	printf("memcmp: Compare 'Hello' and 'Hello, World!': %d (expected 0)\n", result);
	if (result == res)
		printf("[🟢] Success!\n");
	else
		printf("[🔴] Failure.\n");

	printf("\n");
	return (0);
}
