#include <stdio.h>
/**
 *main - this program finds the sum of every even fibonacci number
 *from one to 4000000
 *Return: returns 0 when complete
 */
int main(void)
{
	unsigned long int num = 0, num2 = 1, hold = 0, sum = 0;

	while (hold < 4000000)
	{
		if (hold % 2 == 0)
			sum += hold;
		hold = num + num2;
		num = num2;
		num2 = hold;
	}
	printf("%lu\n", sum);
	return (0);
}
