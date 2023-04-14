#include "main.h"
#include <stdlib.h>
/**
  *_memset- fills memory
  *@s: area to be filled
  *@b: char to copy
  *@n: number of times to copy char
  *Return: pointer to memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
  *_calloc- allocates memory for an array of elements
  *@nmemb: elements in the array
  *@size: size of the array
  *Return: a pointer to the allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = (void *)malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}


