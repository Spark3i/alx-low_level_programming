#include "main.h"
/**
*_islower - check if charcater is lowercase
*@c: char to be checked
*Return:1 if char is lowercase,otherwise succesful at 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
