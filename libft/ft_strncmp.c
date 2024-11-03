#include "libft.h"
/* 
int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	unsigned char	s1[] = "abc\xFF";
	unsigned char	s2[] = "abc\x80";

	printf("\n*********************************\n");
	printf("*\tORIGINAL FUNCION\t*\n");
	printf("*********************************\n");
	printf("Comparing 'abc' and 'ab': %d\n", strncmp("abc", "ab", 3));
	printf("Comparing 'ab' and 'abc': %d\n", strncmp("ab", "abc", 3));
	printf("Comparing 'abc' and 'abc': %d\n", strncmp("abc", "abc", 3));
	printf("Comparing 'abc' and 'abcd': %d\n", strncmp("abc", "abcd", 3));
	printf("Comparing 'abc' and 'abcd' with n=0: %d\n",
		strncmp("abc", "abcd", 0));
	printf("Comparing 'abc' and 'abcdef' (s1 contido em s2): %d\n",
		strncmp("abc", "abcdef", 5)); 
	printf("Comparing 'abc\xFF' and 'abc\x80': %d\n",
		strncmp((const char *)s1, (const char *)s2, 4));
	printf("\n*********************************\n");
	printf("*\tFUNCION CREATED\t\t*\n");
	printf("*********************************\n");
	printf("Comparing 'abc' and 'ab': %d\n", ft_strncmp("abc", "ab", 3));
	printf("Comparing 'ab' and 'abc': %d\n", ft_strncmp("ab", "abc", 3));
	printf("Comparing 'abc' and 'abc': %d\n", strncmp("abc", "abc", 3));
	printf("Comparing 'abc' and 'abcd': %d\n", strncmp("abc", "abcd", 3));
	printf("Comparing 'abc' and 'abcd' with n=0: %d\n",
		ft_strncmp("abc", "abcd", 0));
	printf("Comparing 'abc' and 'abcdef' (s1 contido em s2): %d\n",
		ft_strncmp("abc", "abcdef", 5));
	printf("Comparing 'abc\xFF' and 'abc\x80': %d\n",
		ft_strncmp((const char *)s1, (const char *)s2, 4));
	return (0);
} */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
