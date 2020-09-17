#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 *main - gens random number and checks if the last digit is > 5, <6 and not 0
 *or just plain old zero
 *Return: retunrs zero when finished
 */
int main(void)
{
	int n;
	int lastDig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDig = n % 10;
	if (lastDig > 5)
		printf("Last digit of %i is %i and is greater than 5", n, lastDig);
	else if (lastDig < 6 && lastDig != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0", n, lastDig);
	else
		printf("Last digit of %i is %i and is 0");
	return (0);
}
