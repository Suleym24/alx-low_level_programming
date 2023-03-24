#include <stdio.h>
/**
 * main -> entry point
 *Return: always 0
 */
int main(void)
{
	int i, b = 2, c;
	long a = 1;

	for (i = 1; i <= 50; i++)
	{
		printf("%ld, ", a);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
