#include "main.h"
/**
  *_memset- code to fill memory
  *@s: pointer
  *@b: char
  *@n: integer
  *Return: *s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;
	
	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
