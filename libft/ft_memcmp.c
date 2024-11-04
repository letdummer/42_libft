#include "libft.h"
/* 
int	ft_memcmp(const void *str1, const void *str2, size_t n);

int	main(void)
{
	char	*str1 = NULL;
	char	*str2 = NULL;
	int		result = ft_memcmp(str1, str2, strlen(str1));

	printf("Test 1: Both strings NULL: %d (expected 0)\n", result);
	str1 = NULL;
    str2 = "Hello";
    result = ft_memcmp(str1, str2, 5);
    printf("Test 2: str1 NULL, str2 'Hello': %d (expected -1)\n", result);

    // Test case 3: str2 is NULL, str1 is not
    str1 = "Hello";
    str2 = NULL;
    result = ft_memcmp(str1, str2, 5);
    printf("Test 3: str1 'Hello', str2 NULL: %d (expected 1)\n", result);

    // Test case 4: Both strings are empty
    str1 = "";
    str2 = "";
    result = ft_memcmp(str1, str2, 0);
    printf("Test 4: Both strings empty: %d (expected 0)\n", result);

    // Test case 5: Compare identical strings
    str1 = "Hello";
    str2 = "Hello";
    result = ft_memcmp(str1, str2, 5);
    printf("Test 5: Both strings 'Hello': %d (expected 0)\n", result);

    // Test case 6: Compare different strings
    str1 = "Hello";
    str2 = "Hellz";
    result = ft_memcmp(str1, str2, 5);
    printf("Test 6: Compare 'Hello' and 'Hellz': %d (expected <0)\n", result);

    // Test case 7: Compare strings of different lengths
    str1 = "Hello";
    str2 = "Hello, World!";
    result = ft_memcmp(str1, str2, 5);
    printf("Test 7: Compare 'Hello' and 'Hello, World!': %d (expected 0)\n", result);

	return (0);
} */

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	const unsigned char	*string1;
	const unsigned char	*string2;

	string1 = (const unsigned char *)str1;
	string2 = (const unsigned char *)str2;
	if (n == 0)
		return (0);
	if (string1 == NULL)
	{
		if (string2 == NULL)
			return (0);
		else
			return (-1);
	}
	if (string2 == NULL)
		return (1);
	i = 0;
	while (i < n)
	{
		if (string1[i] != string2[i])
			return (string1[i] - string2[i]);
		i++;
	}
	return (0);
}
