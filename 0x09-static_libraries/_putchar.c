#include "main.h"
#include <unistd.h>
/**
  *_putchar- code to print
  *@c: char to print
  *Return: 1 when succesful, 0 when their is error
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
