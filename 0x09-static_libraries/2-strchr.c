#include "main.h"
/**
  *_strchr- code to locate char in a string
  *@s: string
  *@c: char
  *Return: c if located, othewise return NULL
  */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}

