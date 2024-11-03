#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

/* int	main(void)
{
	int	c = 'a';
	int result;

	while (c <= 'z')
	{
	result = ft_isalpha(c);
	printf("%d", result);
	c++;
	}
	return (0);
} */