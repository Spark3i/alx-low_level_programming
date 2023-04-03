#include "main.h"
/**
  *_memcpy- copy memory
  *@dest: destination to copy too
  *@src: source to copy from
  *@n: unsigned integer
  *Return: destination when succesful
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
