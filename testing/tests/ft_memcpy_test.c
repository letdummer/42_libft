#include "../include/libft.h"
#include <stdio.h>
#include <limits.h>
#include <stddef.h>
#include <string.h>

void print_array(void *ptr, size_t jump, int n)
{
	printf("{");
	for(int i = 0; i < n; i++)
	{
		if(jump == 4)
			printf("%d ", ((int *)ptr)[i]);
		else
			printf("%c", ((char *)ptr)[i]);
	}
	printf("\n");
}

void	*ft_memcpy_test()
{
	int original[10] = {-1, 0, 1, 234, -123, INT_MAX, INT_MIN};
	int originalres[10] = {0};
	size_t n1 = 7 * sizeof(int);
	char		*reso;
	
	char created[] = "This is a string";
	char createdres[20] = {0};
	size_t n2 = sizeof(created) - 1;
	char	*resc;
	
	printf("\n/===================================\\");
	printf("\n|        Running ft_memcpy          |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	printf("\nTest 1: USING memcpy\n");
	printf("Sending:\n\toriginalres =  ");
	print_array(originalres, sizeof(int), n1 / sizeof(int));
	
	reso = memcpy(originalres, original, n1);
	printf("Result:\n\toriginalres =  ");
	print_array(originalres, sizeof(int), n1 / sizeof(int));

	
	printf("\nTest 1: USING ft_memcpy\n");
	memset(originalres, 0, n1);
	printf("Sending:\n\toriginalres =  ");
	print_array(originalres, sizeof(int), n1 / sizeof(int));
	
	resc = ft_memcpy(originalres, original, n1);
	printf("Result:\n\toriginalres =  ");
	print_array(originalres, sizeof(int), n1 / sizeof(int));
	
	if (reso == resc)
		printf("[🟢] Success!\n");
	else
		printf("[🔴] Failure.\n");

	printf("\nTest 2: USING memcpy\n");
	printf("Sending:\n\tcreatedres =  ");
	print_array(createdres, sizeof(char), n2);
	
	reso = memcpy(createdres, created, n2);
	printf("Result:\n\tcreatedres =  ");
	print_array(createdres, sizeof(char), n2);
	
	printf("\nTest 2: USING ft_memcpy\n");
	memset(createdres, 0, n2); 
	printf("Sending:\n\tcreatedres =  ");
	print_array(createdres, sizeof(char), n2);
	
	resc = ft_memcpy(createdres, created, n2);
	printf("Result:\n\tcreatedres =  ");
	print_array(createdres, sizeof(char), n2);
	if (reso == resc)
		printf("[🟢] Success!\n");
	else
		printf("[🔴] Failure.\n");
	printf("\n");
	return (0);
}


