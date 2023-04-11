#include "main.h"
#include <stdlib.h>
/**
  *create_array- creates arrays of characters
  *@size: size of the memory
  *@c: characters to create
  *Return: NULL if size is 0, pointer to the array if succesful or if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(size * sizeof(char));
	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}

