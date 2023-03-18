#include <stdio.h>
/**
*main- entry point
*Description: 'print the numvers in base 10 from zero"
*Return: successful at 0
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
