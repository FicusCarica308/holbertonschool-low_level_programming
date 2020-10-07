#include <stdio.h>
#include "holberton.h"
/**
 *_pow_recursion - finds x to the power of y
 *@y: our exponent
 *@x: our base number
 *Return: returns -1 if exponent is less than 0 and 1 if its less than 1
 *also returns final number using recursion
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y < 1)
		return (1);
	return (x * (_pow_recursion(x, y - 1)));
}
