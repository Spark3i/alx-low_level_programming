#include "main.h"
#include <unistd.h>
/**
  *_putchar- code to print
  *@c: char to print
  *Return: 1, &c and 1
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
