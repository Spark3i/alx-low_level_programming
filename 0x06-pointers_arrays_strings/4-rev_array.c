#include "main.h"
/**
  *reverse_array- code to reverse string
  *@a: stribg to reverse
  *@n: number of element
  */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}

