/* #include "../include/libft_tests.h"

// Inclui o protótipo de ft_itoa e as funções auxiliares
char	*ft_itoa(int n);

int	main(void)
{
	int		test_values[] = {123, -456, 0, 2147483647, -2147483648};
	int		num_tests = sizeof(test_values) / sizeof(test_values[0]);
	char	*result;

	printf("Testing ft_itoa with different integer values:\n");
	for (int i = 0; i < num_tests; i++)
	{
		result = ft_itoa(test_values[i]);
		if (result != NULL)
		{
			printf("ft_itoa(%d) = \"%s\"\n", test_values[i], result);
			free(result); // Libera a memória alocada por ft_itoa
		}
		else
		{
			printf("ft_itoa(%d) returned NULL (allocation failed)\n", test_values[i]);
		}
	}

	return (0);
}
 */