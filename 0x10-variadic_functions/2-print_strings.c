#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_strings- functions to print string
  *@separator: separator to use
  *@n: string to print
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, char *);

		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
