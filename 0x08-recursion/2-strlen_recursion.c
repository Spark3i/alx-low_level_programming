#include "main.h"
/**
  *_strlen_recursion- prints the lenght of a string
  *@s: string
  *Return: 0 when succesful
  */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
