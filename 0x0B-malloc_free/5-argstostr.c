#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *
 *
 *
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int bites = 0;
	char *hold;

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; i++)
			bites++;
	hold = malloc(sizeof(char) * bites);

	
}
