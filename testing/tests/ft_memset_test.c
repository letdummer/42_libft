#include "../include/libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset_test()
{
	char	*strings[] = {
		"This is a string",
		"Searching for something",
		"0123456789",
		""
		};
	int		ch[] = {'#', '*', '@', '0'};
	int		i;
	int		nb;
	int		nb_tests;
	char	*result;
	char	*result2;
	char	c;
	char	str[50];

	printf("\n/===================================\\");
	printf("\n|        Running ft_memset          |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	nb = 2;
	i = 0;
	nb_tests = sizeof(strings) / sizeof(strings[0]);
	while (i < nb_tests)
	{
		c = ch[i];
		strncpy(str, strings[i], sizeof(str) - 1);
		str[sizeof(str) - 1] = '\0';
		printf("\n\tTest %d\n", i);
		printf("Before:\t\t%s\n", str);
		result = ft_memset(str, c, nb);
		printf("ft_memset:\t%s\n", result);
		result2 = memset(str, c, nb);
		printf("memset:\t\t%s\n", result2);
 		if (result == result2)
			printf("[🟢] Success!\n");
		else
			printf("[🔴] Failure.\n");
		i++;
		nb+=i;
	}

	printf("\n");
	return (0);
}