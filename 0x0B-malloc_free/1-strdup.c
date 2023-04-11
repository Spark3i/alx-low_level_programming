#include "main.h"
#include <stdlib.h>
/**
  *_strdup-returns pointer to a new string which is a duplicate of the string
  *@str: pointer to duplicate in the memory
  *Return: zero when succesful
  */
char *_strdup(char *str)
{
	char *k;
	int i;
	int j = 0;

	if (str == 0)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	k = (char *)malloc((i + 1) * sizeof(char));
	if (k == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		k[j] = str[j];
	return (k);
}
