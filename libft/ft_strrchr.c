#include "libft.h"
/* 
char	*ft_strrchr(const char *str, int c);

int	main(void)
{
//	const char	str[] = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	const char	str[] = "\0";
	const char	ch = 'a';
	char		*res;

	res = strrchr(str, ch);
	printf("Last occurency of |%d| is: |%s|\n", ch, res);
	return (0);
} */

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	ch;
	char	*result;

	i = 0;
	ch = (char) c;
	if (!str || !c)
		return (NULL);
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] == ch)
				result = (char *) &str[i];
			i++;
		}
		return (result);
	}
}
