#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  *sum_them_all- function to sum all of the parameters passed into it
  *@n: the number of parameters to be passed
  *Return: sum of all the parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int s = 0;
	unsigned int i;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		int x = va_arg(ap, int);

		s += x;
	}
	va_end(ap);
	return (s);
}
