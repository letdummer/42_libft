#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char		*ft_itoa(int n);
static char	*ft_allocate(int len);
static char	*ft_string(char *s, long nb, int is_negative);

//static size_t		ft_len(long nb);

int	main(void)
{
	int		value;
	char	*result;

	value = -123;
	result = ft_itoa(value);
	printf("%s\n", result);
	free (result);
	return (0);
}

char	*ft_itoa(int n)
{
	char	*string;
	long	nb;
	int		len_n;
	int		is_negative;

	nb = n;
	len_n = 0;
	if (nb < 0)
	{
		is_negative = 1;
		nb = -nb;
		len_n++;
	}
	if (nb == 0)
		len_n = 1;
	while (n != 0)
	{
		n = n / 10;
		len_n++;
	}
	string = ft_allocate(len_n);
	if (string == NULL)
		return (NULL);
	return (ft_string(string, nb, is_negative));
}

static char	*ft_string(char *s, long nb, int is_negative)
{
	int	i;
	int	start;
	int	end;
	char	temp;

	if (nb == 0)
	{
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	i = 0;
	if (is_negative)
		s[i++] = '-';
	while (nb > 0)
	{
		s[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	s[i] = '\0';
	if (is_negative)
		start = 1;
	else
		start = 0;
	end = i - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start ++;
		end --;
	}
	return (s);
}

static char	*ft_allocate(int len)
{
	return (char *)malloc ((len + 1) * sizeof(char));
}
/* 
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
 */