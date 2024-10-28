#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*));
static void	ft_transform(unsigned int i, char *c);

int	main(void)
{
	char	strings[][20] = {
		"",
		"A",
		"Hello World",
	};

	size_t		i;

	i = 0;
	size_t num_strings = sizeof(strings) / sizeof(strings[0]); 
    while (i < num_strings)
	{
		printf("ORIGINAL_________ |%s|\n", strings[i]);
		ft_striteri(strings[i], ft_transform);
		printf("\n");
		printf("TRANSFORMED______ |%s|\n\n", strings[i]);
		i++;
	}
	return (0);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

static void ft_transform(unsigned int i, char *c)
{
    if (i % 2 == 0)
    	*c = '#';
}
