#include "main.h"
/**
  *_memset- fill memmory block
  *@s: starting address
  *@b: desired value
  *@n: number of bytes to be changed
  *Return: the memory block with changed values
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
