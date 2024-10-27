//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nitems, size_t size);

int main(void)
{
   int  n = 5;
   int  i = 0;
   int *array;
   
   array = (int*)ft_calloc(n, sizeof(int));
   if (array == NULL) {
	  printf("Memory allocation failed!\n");
	  return 1;
   }
   printf("Array elements after calloc: ");
   while (i < n)
   {
	printf("%d ", array[i]);
	i++;
   }
   printf("\n");
   free(array);

	//Test for allocation failure
   size_t large_n = SIZE_MAX;

   array = (int*)ft_calloc(large_n, sizeof(int));
   if (array == NULL) {
	  printf("Memory allocation failed!\n");
   } else {
	  printf("Unexpected allocation success!\n");
	  free(array);
   }
   return 0;
}

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned char	*ptr;
	size_t		i;

	i = 0;
	ptr = malloc(nitems * size);
	if (ptr == NULL)
		return (NULL);
	while (i < (nitems * size))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}