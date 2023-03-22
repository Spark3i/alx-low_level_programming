#include "main.h"
/**
  *print_alphabet_x10 - code to print the lowercase letters x10
  *return auccess at 0
  */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	i++;
	}
}
