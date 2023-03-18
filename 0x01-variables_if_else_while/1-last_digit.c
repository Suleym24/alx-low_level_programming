#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int n, lsdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lsdig = n % 10;

	if (lsdig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lsdig);
	}
	else if (lsdig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lsdig);
	}
	else if (lsdig < 6 && lsdig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lsdig);
	}
	return (0);
}
