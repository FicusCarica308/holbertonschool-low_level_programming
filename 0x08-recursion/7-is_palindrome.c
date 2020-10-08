#include <stdio.h>
#include "holberton.h"
/**
 *find_factor - finds if our number is actually a prime factor
 *@n: the number to be checked
 *@a: an increment value (sorta like i in an for loop)
 *Return: returns 0 if prime number and 1 if not a prime number
 */
int test_same(char *s, char *c)
{
	if (*s != '\0')
	{
		if (*s != *c)
			return (0);
		else
			test_same(s + 1, c + 1);
	}
	return (1);
}
/**
 *_print_rev_recursion - prints the reverse of a string using recursion
 *@s: the string to be reversed
 */
int reverse_string(char *s, char *c)
{
	if (*s != '\0')
	{
		reverse_string(s + 1, c + 1);
		*c = *s;
	}
	*c = '\0';
	return (test_same(s, c));
}
/**
 *is_palindrome - will find if a string is a palindrome or not
 *@s: the string we are testing
 *Return: 0 if not a palindrome and 1 if it is
 */
int is_palindrome(char *s)
{
	char c[6] = "hello";
	if (*s == '\0')
		return (0);
	else
		return (reverse_string(s, c));
}
