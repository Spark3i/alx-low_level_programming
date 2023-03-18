#include <stdio.h>
/**
*main - entry point'
*Description: 'to print lowercase letters except q and e'
*Return: zero when succesful
*/
int main(void)
{
	int n = 97;

	while (n <= 97)
	{
		if (n == 113 || n == 101)
		{
		n++;
		continue;
		}
		putchar (n);
		n++;
		}
		putchar ('\n');
	return (0);
}
