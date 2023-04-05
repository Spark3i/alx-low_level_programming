#include "main.h"
/**
  *factorial- fucntion to return factorial
  *@n: integer
  *Return: fact when succesful, otherwise -1
  */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
