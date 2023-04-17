#include <stdio.h>
#include "dog.h"
/**
  *print_dog- function to print structure
  *@d: name of variable
  */
void print_dog(struct dog *d)
{
	if (d.name == NULL)
		printf("(nil)");

