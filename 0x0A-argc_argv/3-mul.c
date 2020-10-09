#include <stdio.h>
#include <stdlib.h>
/**
 *main - will print the product of two numbers given to main using argc/argv
 *@argc: the amount of arguments passed to the file
 *@argv: strings of each argument
 *Return: 0 after completion
 */
int main(int argc, char *argv[])
{
	int prod = 0;

	if (argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", prod);
}
