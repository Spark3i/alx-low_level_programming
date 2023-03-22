#include "main.h"
/**
  *print_sign - code ti print sign
  *@n: signs to print
  *Return: 1 when positive , 0 when its zwron, otherwise return -1
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}

