#include "main.h"
/**
  *get_endianness- checks the endianess of a machine
  *Return: 0 for big, 1-little
  */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
