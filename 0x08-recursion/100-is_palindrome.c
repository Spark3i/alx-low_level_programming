#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
  *is_palindrome- function to check if a string is palindrome
  *@s: string to check
  *Return: 1 if succesful, otherwise 0
  */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
  *_strlen_recursion- returns the lenght of the string
  *@s: the string
  *Return: return the lenght of the string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
  *check_pal- to check for pallindrome
  *@s: string to check
  *@i: iterator
  *@len: lenght of string
  *Return: 1 if its pallindrome, otherwise 0
  */
int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
	{
		return (0);
	}
	else if (i >= len)
	{
		return (1);
	}
	else
	{
		return (check_pal(s, i + 1, len - 1));
	}
}

