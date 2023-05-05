#include "main.h"
/**
  *flip_bits- counts the number of bits to flip
  *@n: first number to flip
  *@m:second number to flip
  *Return: number of bits to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int count = 0;
	unsigned long int mask;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		mask = excl >> i;
		if (mask & 1)
			count++;
	}
	return (count);
}
