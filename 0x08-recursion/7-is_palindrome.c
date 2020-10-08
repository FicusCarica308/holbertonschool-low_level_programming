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
 *is_palindrome - will find if a a given string is a palindrome
 *@s: the string we are testing
 *Return: returns 0 if not a palindrome and 1 if it is
 */
int is_palindrome(char *s)
{
	int length = string_length(s) - 1;

	if (*s == s[length])
		return (1);
	return (0);
}
