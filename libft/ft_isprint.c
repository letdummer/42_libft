#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* int main(void)
{
	int result;
	int c;
	c = 0;
	while (c <= 47)
	{
		result = ft_isprint(c);
		printf("%d", result);
		c++;
	}
} */