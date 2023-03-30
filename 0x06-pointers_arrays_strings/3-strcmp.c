#include "main.h"
/**
  * _strcmp - code to compare strings
  *@s1: char to compare
  *@s2: char to compare
  *Return: 0 when succesful
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

