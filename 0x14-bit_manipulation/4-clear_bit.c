#include "main.h"
/**
  *clear_bit - set a bit at a given index to 1
  *@n: pointer to the number to clear
  *@index: indec of the bit to clear
  *Return: 1 when success , otherwise -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
