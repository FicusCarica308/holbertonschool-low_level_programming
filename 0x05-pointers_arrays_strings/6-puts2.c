#include <stdio.h>
#include "holberton.h"
/**
 *puts2 - prints every other value of an array
 *@str: the given string to be printed
 */
void puts2(char *str)
{
	int length;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	length = length - 1;

	for (i = 0; i <= length; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
