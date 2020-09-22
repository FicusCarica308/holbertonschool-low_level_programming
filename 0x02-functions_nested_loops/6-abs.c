#include <stdio.h>
#include "holberton.h"

/**
 *_abs - function that finds the absolute value of a number
 *Return: returns the absolute value
 *@num: this parameter is the number that you have to find the absolute val for
 */
int _abs(int num)
{
	if (num < 0)
		num = num * num;
	return (num);
}
