#include <stdio.h>
/**
 * main -> entry point
 *Return: always 0
 */
int main(void)
{
	long i, b = 2, c, a = 1;

	for (i = 1; i <= 50; i++)
	{
		printf("%ld", a);
		c = a + b;
		a = b;
		b = c;
		if (i < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
