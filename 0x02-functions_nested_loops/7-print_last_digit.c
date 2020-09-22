#include <stdio.h>
#include "holberton.h"

/**
 *print_last_digit - will find the last digit of a number and return it
 *Return: num after the last digit is assigned to it
 *@num: The original number that is used to find its last digit
 */
int print_last_digit(int num)
{
	int ascii = 0;

	num = num % 10;
	ascii = (char)num;
	_putchar(ascii);
	return (num);
}
