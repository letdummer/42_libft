#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/* int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	main(void)
{
	int i = 91;
	int result;

	while (i <= 96)
	{
		result = ft_isalnum(i);
		printf("%d", result);
		i++;
	}
}  */