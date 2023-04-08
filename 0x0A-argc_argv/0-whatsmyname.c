#include "main.h"
#include <stdio.h>
/**
  *_main- code to print name of program
  *@argc: counts the number of variable
  *@argv: displays the variables in the compiler
  *Return: 1 when succesful
  */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
