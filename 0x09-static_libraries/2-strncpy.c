#include "main.h"
/**
  *_strncpy - code to copy string
  *@dest: string to copy into
  *@src: string to be copied
  *@n: integer
  *Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
