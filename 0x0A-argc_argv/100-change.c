#include <stdio.h>
#include <stdlib.h>
/**
 *main - will print out the minimum amount of coins needed to give change
 *@argc: the amount of arguments passed to the file
 *@argv: strings of each argument
 *Return: 0 after completion
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int num = atoi(argv[1]);
	int count = 0;

	if (argc > 2)
	{
		printf("Error");
		return (1);
	}
	if (num < 0)
		printf("0\n");
	while (num > 0)
	{
		if (num % 25 == 0)
		{
			num -= 25;
			count++;
		}
		else if (num % 10 == 0)
		{
			num -= 10;
			count++;
		}
		else if (num % 5 == 0)
		{
			num -= 5;
			count++;
		}
		else if (num % 2 == 0)
		{
			num -= 2;
			count++;
		}
		else if (num % 1 == 0)
		{
			num -= 1;
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
