#include "main.h"
/**
  *print_line- code to draw a straight line
  *@n: num of times to be printed
  *Return: 0 when succesful
  */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
