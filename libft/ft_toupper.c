#include "libft.h"
/* 
int	ft_toupper(int c);

int	main(void)
{
	int	result;

	result = ft_toupper('a');
	printf("%c\n", result);
	result = ft_toupper('7');
	printf("%c\n", result);
	result = ft_toupper('z');
	printf("%c\n", result);
	result = ft_toupper('A');
	printf("%c\n", result);
	return (0);
} */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
		return (c);
	}
	else
		return (c);
}
