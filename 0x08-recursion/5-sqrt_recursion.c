#include "main.h"
/**
  *_sqrt_recursion- returns square root
  *@n: integer
  *Return: sqrt when succesful, otherwise -1
  */
int _sqrt_recursion(int n)
{
	int d;

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
		return (_sqrt_recursion(n, d + 1));
	}
}
