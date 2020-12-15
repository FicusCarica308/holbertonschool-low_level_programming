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
	int first;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			oper unsigned long int num = 0;
			unsigned long int num2 = 1;
			unsigned long int hold = 0;
			int i = 0;

			for (i = 0; i <= 51; i++)
			{
				if (i > 1)
					printf("%lu", num);
				if (i != 51 && i > 1)
					printf(", ");
				hold = num + num2;
				num = num2;
				num2 = hold;
			}
			printf("\n");
			return (0);= i * j;
			if (oper >= 10)
			{
				first = oper;
				while (first >= 10)
				{
					first = first / 10;
				}
				_putchar(',');
				_putchar(' ');
				_putchar(first + '0');
				oper = oper % 10;
				_putchar(oper + '0');
			} else
			{
				if (j > 0)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
				_putchar(oper + '0');
			}

		}
		_putchar('\n');
	}
}
