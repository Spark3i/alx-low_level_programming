#include "main.h"
#include <stdio.h>

/**
  *main- code to print number of variables
  *@argv: variables storage
  *@argc: to prlint number of var
  *Return: 0 when succesful
  */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

