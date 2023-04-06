#include "main.h"
int actual_sqrt_recursion(int n, int d);
/**
  *_sqrt_recursion- returns square root
  *@n: integer
  *Return: sqrt when succesful, otherwise -1
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
  *actual_sqrt_recursion- sqrt of number
  *@n: the number
  *@d: to iterate
  *Return: square root of number
  */
int actual_sqrt_recursion(int n, int d)
{
	if (d * d > n)
	{
		return (-1);
	}
	else if (d * d == n)
	{
		return (d);
	}
	else
	{
		return (actual_sqrt_recursion(n, d + 1));
	}
}
