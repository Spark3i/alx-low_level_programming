#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
  *init_dog- initailize variable type dog
  *@d: variable name
  *@name: name
  *@age: age
  *@owner: name of owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
