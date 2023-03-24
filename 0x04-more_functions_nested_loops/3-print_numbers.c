#include "main.h"
/**
  *print_numbers- code to print numbers from zero to 9
  *@c num to print
  *Return: 0 when succeful
  */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
