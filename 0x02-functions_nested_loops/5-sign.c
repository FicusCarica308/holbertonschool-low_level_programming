#include <stdio.h>
#include "holberton.h"
/**
 *print_sign - This funcion will print +, -, or 0 depending on the number given
 *Return: will return 0 if # is 0, 1 if # is > 0, and -1 if # is < 0
 *@n: this parameter is the number that is to be tested if it is > < or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0 && n != 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
