#include "main.h"
#include <stdlib.h>
/**
  *array_range- creates an array of integers
  *@min: minimum number of integer
  *@max: maximum number of integer
  *Return: pointer to newly created array
  */
int *array_range(int min, int max)
{
	int i;
	int size;
	int *ptr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = (int *)malloc(size * (sizeof(int)));
	if (ptr == NULL)
	return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
