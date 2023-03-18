#include <stdio.h>
/**
*main - entry point'
*Description: 'to print lowercase letters except q and e'
*Return: zero when succesful
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
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
