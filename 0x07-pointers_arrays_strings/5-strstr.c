#include <stdio.h>
#include "holberton.h"
/**
 *_strstr - Write a function that locates a substring within a parent string
 *@haystack: the parent string
 *@needle: the substring we are searching for
 *Return: returns null if not found/parent string
 * or returns pointer to the found substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int hold = 0;
	int j = 0;
	int length = 0;

	for (length = 0; needle[length] != '\0'; length++)
	{
	}

	if (length < 1)
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (hold = i; haystack[hold + j] == needle[j]; j++)
			{
			}

			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return (NULL);
}
