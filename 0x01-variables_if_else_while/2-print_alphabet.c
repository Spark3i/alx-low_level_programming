#include <stdio.h>
/**
*main - entry point
*Description: 'to print lower case letters'
*Return: zero means sucessful
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar (n);
		n++;
	}
	putchar ('\n');
	return (0);
}
