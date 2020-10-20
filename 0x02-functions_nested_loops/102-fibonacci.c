#include <stdio.h>
#include "holberton.h"
/**
 *main - prints the first 50 fibonacci numbers
 *Return: returns 0 when finished
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 0;
	int i = 0;

	for (i = 0; i <= 25; i++)
	{
		b = a + b;
		printf("%lu\n", a);
		a = b + a;
		printf("%lu\n", b);
	}
	return (0);
}
