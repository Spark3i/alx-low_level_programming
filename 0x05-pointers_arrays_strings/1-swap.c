#include "main.h"
/**
  *swap_int- swap the values of two integers
  *@a: int to be swapped
  *@b: int to be swapped
  */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
