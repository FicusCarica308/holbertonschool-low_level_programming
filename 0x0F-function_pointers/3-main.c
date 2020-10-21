#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *
 * 2 3 4
 *
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int (*p)(int,int);

	if (argc > 4 || argc < 4)
	{
		printf("Error1\n");
		exit(98);
	}

	if (num2 == 0)
	{
		printf("Error2");
		exit(100);
	}

	p = get_op_func(argv[2]);

	if (p == NULL)
	{
		printf("Error3\n");
		exit(99);
	}

	printf("%d", (*p)(num1, num2));
	return (0);
}
