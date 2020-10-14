#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *argstostr - this function will concat a series of given arguments
 *@ac: the amount of arguments
 *@av: the string containing a each string of argument
 *Return: will return NULL on failure or else a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int bites = 0;
	char *hold;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			bites++;

	hold = malloc((sizeof(char) * bites) + (sizeof(char) * ac));

	if (hold == NULL)
	{
		free(hold);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			hold[k] = av[i][j];
			k++;
		}
		hold[k] = '\n';
		k++;
	}
	return (hold);
}
