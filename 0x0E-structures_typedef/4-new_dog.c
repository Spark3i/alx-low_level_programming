#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
  *_strlen- returns lenght of the string
  *@s: the string
  *Return: lenght of string
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
  *_strcpy- copy string from source to destination
  *@src: source to copy from
  *@dest: destination to copy to
  *Return: pointer to destination
  */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
  *new_dog- creates function new dog
  *@name: name of dog
  *@age: age of dog
  *@owner: owner of dog
  *Return: pointer to the new function
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1 = _strlen(name);
	int len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = (char *)malloc((len1 + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = (char *)malloc((len2 + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
