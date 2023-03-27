#include "main.h"
/**
  *print_rev- prints string in reverse
  *@s: character to print in reverse
  */
void print_rev(char *s)
{
	int letter;
	int o;

	while (*s != '\0')
	{
		letter++;
		s++;
	}
	s--;
	for (o = letter; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

