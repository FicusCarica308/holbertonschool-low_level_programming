#include <stdio.h>
#include "holberton.h"

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int hold = 0;
	int j = 0;

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
