#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/* int	main(void)
{
	int i = 'a';
	int result;

	while (i <= 'z')
	{
		result = ft_isdigit(i);
		printf("%d", result);
		i++;
	}
} */