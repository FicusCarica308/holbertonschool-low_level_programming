#include <stdio.h>
#include "holberton.h"
/**
 *_puts - prints a string followed by a new line to stdout
 *@str: the tring to be output
 */
void _puts(char *str)
{
	int length;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	length = length - 1;

	for (i = 0; i <= length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
