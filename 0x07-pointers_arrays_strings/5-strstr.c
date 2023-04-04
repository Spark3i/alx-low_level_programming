#include "main.h"
/**
  *_strstr- code to find first occurence of substring
  *@haystack: string
  *@needle: substring
  *Return: 0 when successful
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *n = needle;
		char *h = haystack;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}

