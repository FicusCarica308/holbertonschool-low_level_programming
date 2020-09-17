#include <stdio.h>

/**
 *main - prints out the alphabet lowercase a-z using putchar and for loop
 *Without characters e or q
 *Return: returns 0 when done
 */

int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
	}
	for (i = 97 ; i <= 102 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
