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
			while (needle[j] != '\0' || haystack[i] != '\0')
			{
				if (needle[j] == haystack)
			}
		}
	}
	for (i = hold; haystack[i] != '\0' i++)
	{
		for(j = 1; needle[j] != '\0' j++)
	}
	return (haystack + i);
	return (NULL);
}
