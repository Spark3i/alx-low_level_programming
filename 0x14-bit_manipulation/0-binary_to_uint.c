#include "main.h"
/**
  *binary_to_uint- converts binary number to unsigned int
  *@b: steing containing the binary number
  *Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' ||  b[i] == '1')
		{
			num = num * 2 + (b[i] - '0');
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (num);
}
