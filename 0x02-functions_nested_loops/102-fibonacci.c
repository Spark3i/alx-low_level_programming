#include <stdio.h>
/**
  *main -prints 50 fibonacci numhers starting with 1 and 2
  *seperated by commas adn space
  *Return: alwyas zero
  */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(",");
		}
	}
	return (0);
}
