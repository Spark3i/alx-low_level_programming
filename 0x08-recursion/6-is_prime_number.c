#include "main.h"
int actual_prime(int n, int i);
/**
  *is_prime_number- function to return prime number
  *@n: integer
  *Return: return 1 if input is prime number, other wise 0
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
  *actual_prime - calculates if a number is a prime number using recursion
  *@n: number to calculate
  *@i: for iteration
  *Return: prime number
  */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return (actual_prime(n, i - 1));
	}
}
