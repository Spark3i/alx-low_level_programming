#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
  *free_dog- function to free the memory allocated to dog
  *@d: memory to free
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
