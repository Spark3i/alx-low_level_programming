#include "main.h"
/**
  *_isupper- function to change characters to uppercase
  *@c: char to check
  *Return: 0 when succesful, otherwise 1
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}



