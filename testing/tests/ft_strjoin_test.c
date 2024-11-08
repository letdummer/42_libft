#include "../include/libft.h"
#include <stdio.h>

char	*ft_strjoin_test()
{
	char	*string1[] = {"this is", "H33llo,", NULL};
	char	*string2[] = {" a string", "world!", "abc"};
	char	*result;
	int		nb_tests;
	int		i;

	printf("\n/===================================\\");
	printf("\n|        Running ft_strjoin         |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	nb_tests = sizeof(string1) / sizeof(string1[0]);

	i = 0;
	while (i < nb_tests)
	{
		result = ft_strjoin(string1[i], string2[i]);
		printf("Test %d\n", i);
		printf("\tResult: |%s|\n", result);
		if (result == NULL)
		{
			printf("[🔴] Failure: input string is NULL\n");
			printf("\n");
		}
		else
		{	
			printf("[🟢] Success: string concatened: |%s|\n", result);
			printf("\n");
		}
		i++;
	}
	printf("\n");
	return (0);
}