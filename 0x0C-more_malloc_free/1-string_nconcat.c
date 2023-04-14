#include "main.h"
#include <stdlib.h>

/**
  *string_nconcat- concatenates two string in a newly allocated memory
  *@s1: strings to concatenate
  *@s2: string to concatenate
  *@n: number of bytes to allocate
  *Return: pointer yo newly allocated space
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		str = (char *)malloc((len1 + n + 1) * sizeof(char));
	else
		str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
		str[i++] = s2[j++];
	while (n >= len2 && i < (len1 + len2))
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}


