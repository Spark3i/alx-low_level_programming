#include "main.h"
#include <unistd.h>
/**
  *_putchar - writes the char c to std out
  *@c: char to write
  *Return: on success 1
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
