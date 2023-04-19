#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
  *op_add- adds two integers
  *@a: the first integer
  *@b: the second integer
  *Return:sum of the integers
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subtracts two integers
 *@a: the first integer
 *@b: the second integers
 *Return:difference of the integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  *op_mul- multiplies two integers
  *@a: first integer
  *@b: second integer
  *Return: multiplication of the two numbers
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  *op_div- divides two integers
  *@a: first integer
  *@b: second integer
  *Return: divsiin of the two integers
  */
int op_div(int a, int b)
{
	return (a / b);
}
/**
  *op_mod- finds the remainder of division of two numsbers
  *@a: first integer
  *@b: second integer
  *Return: remainder of the two numbers
  */
int op_mod(int a, int b)
{
	return (a % b);
}

