#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_all- prints anything
  *@format: type of variable
  */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	char *sep = "";
	va_list ap;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (str == NULL)
						printf("(nil)");
					else
						printf("%s%s", sep, str);
					break;
				default:
				i++;
				continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}

