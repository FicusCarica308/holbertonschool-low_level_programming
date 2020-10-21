#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - works like a calculator using two numbers and a operator input
 *@argc: How many arguments there are
 *@argv: the arguments that are given
 *Return: returns 0 if succesful, or will exit with code 98 through 100
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*p)(int, int);

	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	p = get_op_func(argv[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", (*p)(num1, num2));
	return (0);
}
