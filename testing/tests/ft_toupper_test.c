/*
#include "../include/libft.h"
#include <ctype.h>

int	ft_toupper(void)
{
	int	chars[] = {'a', '7', 'z', 'A'};
	int	num_tests;
	int	i;
	int	c;
	int	original;

	i = 0;
	num_tests = sizeof(chars) / sizeof(chars[0]);
	i = -1;
	while (++i < num_tests)
	{
		c = chars[i];
		original = toupper(c);
		if (original > 0)
			original = 1;
		if (original == ft_toupper(c))
			printf("test passed for input '%c'\n", c);
		else
			printf("Test failed for input '%c\n", c);
	}

	return (0);
} */