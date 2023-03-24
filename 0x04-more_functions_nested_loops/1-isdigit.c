#include "main.h"
/**
  *_isdigit- code to check numbers
  *@c: number to check
*Return: 1 if C is digit, otherwise 0
*/
int _isdigit(int c)
{
	if (c == '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

