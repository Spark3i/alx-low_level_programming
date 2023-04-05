#include "main.h"
#include <unistd.h>
/**
  *_putchar- print a string
  *@c: char
  *Return: 0 when succesful
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
