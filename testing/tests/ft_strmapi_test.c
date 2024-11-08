#include "../include/libft.h"
#include <stdio.h>
#include<stdlib.h>

static char	ft_transform(unsigned int i, char c);

void	ft_strmapi_test()
{
	char	*strings[] = {
		"",
		"A",
		"123",
		"Hello World",
		"this function modifies the string when the index is even",
		NULL
	};

	char	*result;
	int		i;
	int		nb_tests;

	printf("\n/===================================\\");
	printf("\n|        Running ft_strmapi         |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	nb_tests = sizeof(strings) / sizeof(strings[0]);
	i = 0;
	while (i < nb_tests)
	{
		printf("\nTest %d\n", i);
		if (strings[i] == NULL)
		{
			printf("[🔴] Failure: Input string is NULL\n");
			i++;
			continue;
		}
		result = ft_strmapi(strings[i], ft_transform);
		if (result == NULL)
		{
			printf("[🔴] Failure: Returned NULL (allocation failed)\n");
			continue;
		}
			printf("\n");
			printf("Test %d\n", i);
			printf("ORIGINAL_________ |%s|\n", strings[i]);
			printf("TRANSFORMED______ |%s|\n", result);
			printf("[🟢] Success: string modified.\n");
			free (result);
		i++;
	}
	printf("\n");
} 

static char	ft_transform(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		return (c = '#');
	}
	return (c);
}
