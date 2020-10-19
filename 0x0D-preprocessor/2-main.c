#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints out the name of the file that is called (using __FILE__ macro)
 *Return: returns 0 on success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
