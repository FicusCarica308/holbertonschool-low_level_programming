#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98 - this function prints from a given number to 98
 *@n: the number that it is counting up from
 */
void print_to_98(int n)
{
	int i;
	int first;
	int last;

	for (i = n; i <= 98; i++)
	{
		if (i > 10)
		{
			first = i;
			while (first >= 10)
				first = first / 10;
			last = i % 10;
			_putchar('0' + first);
			_putchar('0' + last);
		} else
		{
		_putchar('0' + i);
		}

		if (i != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
}
