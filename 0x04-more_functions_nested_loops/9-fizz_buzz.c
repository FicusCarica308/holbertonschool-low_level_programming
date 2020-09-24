#include <stdio.h>
/**
 *main - main will print 0 - 100 and following every 3rd multiple
 *it will print Buzz Fizz
 *Return: returns 0 always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0 && i != 0)
		{
			printf("FizzBuzz");
		} else if (i % 5 == 0 && i != 0)
		{
			printf("Buzz");
		} else if (i % 3 == 0 && i != 0)
		{
			printf("Fizz");
		} else
		{
			printf("%d", i);
		}

		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
