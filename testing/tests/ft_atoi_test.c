#include "../include/libft.h"
#include <stdio.h>

int					ft_atoi_test()
{	
	printf("CREATED: atoi: %d\n", ft_atoi("-999999999999"));
	printf("\n");
	printf("CREATED: atoi: %d\n", ft_atoi("-2147483648"));
	printf("\n");
	printf("CREATED: atoi: %d\n", ft_atoi("2147483647"));

	return (0);
}