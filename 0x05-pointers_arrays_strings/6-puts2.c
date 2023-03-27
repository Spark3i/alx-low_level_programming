#include "main.h"
/**
  *puts2- prints half of the string
  *@str: strings to print
  */
void puts2(char *str)
{
	int len = 0;
	int m = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	m = len - 1;
	for (o = 0; o <= m; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}

