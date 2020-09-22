#include <stdio.h>
#include "holberton.h"

/**
 *print_alphabet - This functions prints the alphabet
 *Return: returns nothing
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
