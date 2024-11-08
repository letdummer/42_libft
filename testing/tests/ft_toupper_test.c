#include "../include/libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_toupper_test()
{
	size_t	strings[] = {
			'a',
			'z',
			'B',
			'3'
		};
	char		result;
	char		reso;
	int		nb_tests;
	int		i;

	printf("\n/===================================\\");
	printf("\n|        Running ft_toupper         |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	nb_tests = sizeof(strings) / sizeof(strings[0]);

	i = 0;
	while (i < nb_tests)
	{
		printf("\nTest %d\n", i);

		reso = toupper(strings[i]);
		result = ft_toupper(strings[i]);
		if (!strings[i])
		{
			printf("[🔴] Failure: Returned NULL (allocation failed)\n");
			//return (NULL);
		}
		if (result == reso)
		{
			printf("[🟢] Success: the result matches with the original function. |%c|\n", result);
		}
		else
			printf("[🔴] Failure. \n");
		i++;
	}
	printf("\n");
	return (0);
}
