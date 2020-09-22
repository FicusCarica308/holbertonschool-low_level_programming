#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

int _putchar(char c);

void print_alphabet(void);

/**
 *print_alphabet_x10 - prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 9 ; i++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
	putchar('\n');
	}
}

/**
 * _islower - asdasd
 *Return:asd
 *@c:sad
 */
int _islower(int c)
{
	int i;
	int check = 0;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			check++;
		}
	}
	if (check == 1)
		return (1);

	return (0);
}
#endif
