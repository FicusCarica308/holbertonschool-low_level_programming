#include <stdio.h>
#include <stdlib.h>
/**
 *main - will print the sum of only positiv numbers input by argument
 *@argc: the amount of arguments passed to the file
 *@argv: strings of each argument
 *Return: 0 after completion
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}