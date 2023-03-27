#include "main.h"
/**
  * _strlen- prints the lenght of a string
  *@s: lenght of string to print
  *Return: returns the lenght of the string
  */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
