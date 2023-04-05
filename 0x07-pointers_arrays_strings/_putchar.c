#include "main.h"
#include <unistd.h>
/**
  *_putchar- code to print
  *@c: char to print
  *Return: 0 when succesful
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
