#include "main.h"
#include <stdio.h>
/**
  *main- main is the entry point
  *FizzBuzz -to print fizz buzz
  *Return: 0 at succesful
  */
int main(void)
{
	int i, a, b;

	for (i = 1; i <= 100; i++)
	{
		a = i % 3;
		b = i % 5;
		if ((a == 0) && !(b == 0))
		{
			printf("Fizz ");
		}
		else if ((b == 0) && !(a == 0))
		{
			printf("Buzz ");
		}
		else if ((a == 0) && (b == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
