#include "main.h"
/**
  * _strpbrk- locates first function is a string
  * @s: string to store in
  *@accept: char to store
  *Return: s when successful
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
