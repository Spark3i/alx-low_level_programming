#include "main.h"
/**
  *set_bit - set a bit at a given index to 1
  *@n: pointer to the number to set
  *@index: indec of the bit to set
  *Return: 1 when success , otherwise -1
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
