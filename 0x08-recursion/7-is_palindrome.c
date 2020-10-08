#include <stdio.h>
#include "holberton.h"
/**
 *string_length - will find the length of a given string
 *@s: the string we are finding the length of
 *Return: returns the length of a string + the null value
 */
int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + string_length(s + 1));
}
/**
 *check_string - checks if the string is a palandrome
 *@s: the string to be checked
 *@a: a incrementing value
 *Return: returns 0 if not palindrome and 1 if it is
 */
int check_string(char *s, int a)
{
	int length = string_length(s) - 1;

	if (s[a] != s[(length - a)])
		return (0);
	if (a + 1 != length)
		check_string(s, a + 1);
	return (1);
}
/**
 *is_palindrome - will find if a a given string is a palindrome
 *@s: the string we are testing
 *Return: returns 0 if not a palindrome and 1 if it is
 */
int is_palindrome(char *s)
{

	if (check_string(s, 0) == 1)
		return (1);
	if (*s == '\0')
		return (0);
	return (0);
}
