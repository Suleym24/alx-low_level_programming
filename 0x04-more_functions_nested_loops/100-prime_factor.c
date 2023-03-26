#include <stdio.h>
/**
 * main -> entry point
 * Return: returns 0
 */
int main(void)
{
	long i, a;

	for (i = 1; i < 612852475143; i++)
	{
		if (612852475143 % i == 0)
		{
			a = i;
		}
	}
	printf("%ld\n", a);
	return (0);
}
