#include "main.h"
#include <stdio.h>

/**
  *main- code to print all argument it receieves
  *@argv: variables
  *@argc: list of numbers of variables
  *Return: 0 when succesful
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
