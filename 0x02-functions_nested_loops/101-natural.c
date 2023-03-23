#include <stdio.h>
/**
  *main - list all natural numbers below 1024
  *thata re multiples of 3 and 5
  *Return: zero means succesful
  */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
		printf("%d\n", sum);
	}
	return (0);
}
