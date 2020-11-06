#include <stdio.h>
#include "holberton.h"
/**
 *print_binary - prints a decimal number as binary
 *@n: the decimal number given
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp = n;
	if (temp == 1)
	{
		_putchar(1 + '0');
		return;
	}
	if (temp > 1)
		print_binary(temp >> 1);
	_putchar((temp & 1) + '0');
}
