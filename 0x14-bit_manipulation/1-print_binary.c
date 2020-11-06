#include <stdio.h>
#include "holberton.h"
/**
 *max_power - finds the max number of powers we can go through
 *@num: the decimal number that we use to find the max power of two
 *Return: returns the max power
 */
int max_power(unsigned long int num)
{
	int max_power = 0;

	while (num > 1)
	{
		num = num >> 1;
		max_power++;
	}
	return (max_power);
}
/**
 *print_binary - prints a decimal number as binary
 *@n: the decimal number given
 */
void print_binary(unsigned long int n)
{
	unsigned long int hold = 0;
	int max = 0, i = 0;

	max = max_power(n);
	for (i = max; i >= 0; i--)
	{
		hold = 1 << i;
		if (n >= hold)
		{
			n = n - hold;
			_putchar('1');
		}
		else
			_putchar('0');
	}
}
