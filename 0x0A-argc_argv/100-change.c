#include <stdio.h>
#include <stdlib.h>
/**
 *main - will print out the minimum amount of coins needed to give change
 *@argc: the amount of arguments passed to the file
 *@argv: strings of each argument
 *Return: 0 after completion
 */
int main(int argc, char *argv[])
{
	int num = 0;
	int count = 0;
	int i = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc > 2 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
		num = atoi(argv[1]);

	if (num <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (num > 0)
	{
		if (num % coins[i] == 0)
		{
			num -= coins[i];
			count++;
			i = 0;
		}
		else
			i++;
	}
	printf("%d\n", count);
	return (0);
}
