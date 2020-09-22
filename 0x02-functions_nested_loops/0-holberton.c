#include <stdio.h>
#include "holberton.h"

/**
 *_putchar - This functions will print a given char
 *Return: returns the char
 *@c: This parameter holds whatever char the function is called with to be used
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - prints "Holberton" followed by a new line
 *Return: returns 0
 */
int main(void)
{
	_putchar('H');
	_putchar('o');
	_putchar('l');
	_putchar('b');
	_putchar('e');
	_putchar('r');
	_putchar('t');
	_putchar('o');
	_putchar('n');
	putchar('\n');
	return (0);
}
