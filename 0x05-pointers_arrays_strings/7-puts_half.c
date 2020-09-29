#include <stdio.h>
#include "holberton.h"
/**
 *puts_half - prints half of a string
 *@str: the string to be printed
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
		length++;
	if (length % 2 != 0)
	{
		length--;
		for (i = length / 2; i <= length; i++)
			_putchar(str[i]);
		_putchar('\n');
	} else
	{

		for (i = length / 2; i <= length; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
