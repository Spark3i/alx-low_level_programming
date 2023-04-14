#include "main.h"
#include <stdlib.h>
/**
  *malloc_checked- allocates memory using malloc
  *@b: integer to allocate memory for
  *Return: a pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
