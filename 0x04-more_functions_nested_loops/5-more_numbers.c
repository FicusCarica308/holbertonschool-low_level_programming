#include <stdio.h>
#include "holberton.h"
/**
 *more_numbers - prints the numbers 0 - 14 only using _printchar three times
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{

		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
