#include "main.h"
/**
  * _pow_recursion- functions that returns the value of x^y
  *@x: int
  *@y: int
  *Return: x^y when succesful, otherwise return 0
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
