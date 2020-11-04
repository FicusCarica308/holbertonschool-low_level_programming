#include <stdio.h>
#include "holberton.h"
/**
 *main - prints the first 50 fibonacci numbers
 *Return: returns 0 when finished
 */
int main(void)
{
	unsigned long int num = 0;
	unsigned long int num2 = 1;
	unsigned long int hold = 0;
	int i = 0;

	for (i = 0; i <= 51; i++)
	{
		printf("%lu", num);
		if (i != 51)
			printf(", ");
		hold = num + num2;
		num = num2;
		num2 = hold;
	}
	printf("\n");
	return (0);
}
