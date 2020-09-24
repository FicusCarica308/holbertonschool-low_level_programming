#include <stdio.h>
#include "holberton.h"
/**
 *print_numbers - prints the digits 0 through 9 with a new line
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		_putchar(i);
	_putchar('\n');
}
