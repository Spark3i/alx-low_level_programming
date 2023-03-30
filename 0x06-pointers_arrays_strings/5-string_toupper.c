#include "main.h"
/**
  *string_toupper- changes string from lower to upper
  *@n: pointer
  *Return: 0 when succesful
  */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
		i++;
	}
	return (n);
}
