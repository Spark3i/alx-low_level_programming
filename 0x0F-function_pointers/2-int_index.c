#include "function_pointers.h"
#include <stdio.h>
/**
  *int_index- functions that searches for an integer
  *@array: array of integers
  *@size: size of elements
  *@cmp: pointer to the function
  *Return: 0 when succesful, otherwise -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}

