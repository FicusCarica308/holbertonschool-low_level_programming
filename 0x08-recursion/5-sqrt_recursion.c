#include <stdio.h>
#include "holberton.h"
/**
 *find_factor - finds the natural square root of a number
 *@n: the number we find the square root
 *@a: a holber value that we are multiplying by to find the square root
 *Return: returns -1 if not a square root or returns the square root when a is
 * = to n
 */
int find_factor(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (find_factor(n, a + 1));
}
/**
 *_sqrt_recursion - returns the square root of a number
 *@n: the number we want to find the square root of
 *Return: returns the final square root
 */
int _sqrt_recursion(int n)
{
	return (find_factor(n, 1));
}
