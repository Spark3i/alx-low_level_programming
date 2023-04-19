#include "function_pointers.h"
#include <stdio.h>
/**
  *print_name- functions that prints name
  *@name: name to print
  *@f: pointer to the function
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	else
		(*f)(name);
}
