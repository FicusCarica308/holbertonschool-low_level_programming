#include <stdio.h>

/**
 *main - prints out the number 00-99 using only putchar and no char var's
 *with comas and spaces following each one (max 5 putchar's).
 *Without characters e or q
 *Return: returns 0 when done
 */

int main(void)
{
	int i;

	for (i = 0 ; i <= 89 ; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		if (i != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
