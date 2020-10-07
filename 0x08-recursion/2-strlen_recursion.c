#include <stdio.h>
#include "holberton.h"
/**
 *_strlen_recursion - finds the length of a string and returns it
 *@s: the string we find the length of
 *Return: returns the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
