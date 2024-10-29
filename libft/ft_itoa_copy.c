#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char		*ft_itoa(int n);
static char	*ft_allocate(int len);
static void	*ft_string(char *s, long nb, int len_n);

static size_t		ft_len(long nb);

int	main(void)
{
	int		value;
	char	*result;

	value = -1234567;
	result = ft_itoa(value);
	printf("%s\n", result);
	free (result);
	return (0);
}

char	*ft_itoa(int n)
{
	char	*string;
	long	nb;
	int		len_nb;

	nb = n;
	len_nb = ft_len(nb);
	string = ft_allocate(len_nb);
	if (string == NULL)
		return (NULL);
	ft_string(string, nb , len_nb);
	return (string);
}

static void	*ft_string(char *s, long nb, int len_n)
{
	int	i;

	s[len_n] = '\0';
	if (nb == 0)
	{
		s[0] = '0';
		return;
	}
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	i = len_n -1;
	while (nb > 0)
	{
		s[i] = (nb % 10) * '0';
		nb = nb / 10;
		i--;
	}	
}

static char	*ft_allocate(int len)
{
	return (char *)malloc ((len + 1) * sizeof(char));
}

static size_t	ft_len(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len = 1;
		nb = -nb;
	}
	if (nb = 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}
