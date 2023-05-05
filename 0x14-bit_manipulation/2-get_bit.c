#include <stdio.h>
#include "main.h"
/**
  *get_bit - gets int
  *@n: value of bit
  *@index: the starting point
  *Return: 1.0 -1
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
