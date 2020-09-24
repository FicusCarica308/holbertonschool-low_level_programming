#include <stdio.h>
#include "holberton.h"
/**
 *print_most_numbers - prints the digits 0 through 9 except for 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		if (i != 52 && i != 50)
			_putchar(i);
	_putchar('\n');
}
