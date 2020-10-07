#include <stdio.h>
#include "holberton.h"
/**
 *find_factor - finds if our number is actually a prime factor
 *@n: the number to be checked
 *@a: an increment value (sorta like i in an for loop)
 *Return: returns 0 if prime number and 1 if not a prime number
 */
int find_factor(int n, int a)
{
	if (n <= 2)
	{
		if (n == 2)
			return (1);
		else
			return (0);
	}
	if (n % a == 0)
		return (0);
	if (a * a > n)
		return (1);
	return (find_factor(n, a + 1));
}
/**
 *is_prime_number - prints the return value of find_factor
 *@n: the number that we want to check if its a prime factor
 *Return: returns the return value of find_factor which is 0 if prime and 1 if
 *not
 */
int is_prime_number(int n)
{
	return (find_factor(n, 2));
}
