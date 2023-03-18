#include <stdio.h>
/**
*main- entry point
*Description: 'prints lowercase letters in reverse'
*Return: succestful at zero
*/
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
