#include "holberton.h"
#include <stdio.h>
/**
 * factorial - finds the factorial of a given number
 *@n: our given number
 * Return: returns 0 if less than 1, returns the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 1)
		return (1);
	return (n * factorial(n - 1));
}
