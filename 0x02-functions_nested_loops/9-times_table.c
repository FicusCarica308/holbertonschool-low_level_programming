#include <stdio.h>
#include "holberton.h"
/**
 *times_table - displayes the times tables all the way up to 9
 */
void times_table(void)
{
	int i;
	int j;
	int oper;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			oper = i * j;
			_putchar(oper + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
