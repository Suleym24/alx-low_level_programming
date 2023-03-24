#include <stdio.h>
/**
 * main -> entry point
 * Return: always 0
 */
int main(void)
{
	unsigned long i, a = 1, b = 2, c;

	for (i = 1; i <= 98; i++)
	{
		printf("%ld", a);
		c = a + b;
		a = b;
		b = c;
		if (i < 98)
		printf(", ");
	}
	printf("\n");
	return (0);
}
