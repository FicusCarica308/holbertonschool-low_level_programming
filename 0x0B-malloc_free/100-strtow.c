#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *strtow - this function takes a string and splits it into words
 *@str: the string we are gonna split
 *Return: returns a 2d array of strings and NULL if failure
 */
char **strtow(char *str)
{
	int i = 0;
	int count = 0;
	char **new;

	for (i = 0; i != str; i++)
		if (str[i] != ' ' || str[i] != '\0')
			count++;

	
}
