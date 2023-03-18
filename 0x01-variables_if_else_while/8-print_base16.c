#include <stdio.h>
/**
*main -entry point
*Description: 'print the numvers in base 16'
*Return: succesful at zero
*/
int main(void)
{
	int n = 48;
	int m = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (m <= 102)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
