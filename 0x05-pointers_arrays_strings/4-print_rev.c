#include <stdio.h>
#include "holberton.h"
/**
 *print_rev - prints a string in reverse followed by a new line
 *@s: the string to be reversed
 */
void print_rev(char *s)
{
	int length;
	int i;

	while (s[length] != '\0')
		length++;

	length--;

	for (i = length; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
