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
	printf("\n|        Running ft_memcmp          |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n\n");

	printf("\nTest 1\n");
	str1 = "Hello";
	str2 = "Hello";
	result = ft_memcmp(str1, str2, 5);
	printf("ft_memcmp:\tBoth strings 'Hello': %d (expected 0)\n", result);
	res = memcmp(str1, str2, strlen(str1));
	printf("memcmp:\tBoth strings 'Hello': %d (expected 0)\n", res);
	if (result == res)
		printf("[🟢] Success!\n");
	else
		printf("[🔴] Failure.\n");
	printf("\n");

	printf("\nTest 2\n");
	str1 = "Hello";
	str2 = "Hellz";
	result = ft_memcmp(str1, str2, 5);
	printf("ft_memcmp:\tCompare 'Hello' and 'Hellz': %d (expected <0)\n", result);
	res = memcmp(str1, str2, strlen(str1));
	printf("memcmp:\tCompare 'Hello' and 'Hellz': %d (expected <0)\n", result);
	if (result == res)
		printf("[🟢] Success!\n");
	else
		printf("[🔴] Failure.\n");
	printf("\n");

	printf("\nTest 3\n");
	str1 = "Hello";
	str2 = "Hello, World!";
	result = ft_memcmp(str1, str2, 5);
	printf("ft_memcmp:\tCompare 'Hello' and 'Hello, World!': %d (expected 0)\n", result);
	res = memcmp(str1, str2, strlen(str1));
	printf("memcmp:\tCompare 'Hello' and 'Hello, World!': %d (expected 0)\n", result);
	if (result == res)
		printf("[🟢] Success!\n");
	else
		printf("[🔴] Failure.\n");
	printf("\n");
	
	printf("\nTest 4\n");
	str1 = "Hello!";
	str2 = "Hello?";
	result = ft_memcmp(str1, str2, 7);
	printf("ft_memcmp:\tCompare 'Hello' and 'Hello, World!': %d (expected 0)\n", result);
	res = memcmp(str1, str2, strlen(str1));
	printf("memcmp:\tCompare 'Hello' and 'Hello, World!': %d (expected 0)\n", result);
	if (result == res)
		printf("[🟢] Success!\n");
	else
		printf("[🔴] Failure.\n");

	printf("\n");
	return (0);
}
