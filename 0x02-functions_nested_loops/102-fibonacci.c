#include <stdio.h>
/**
 * main -> entry point
 *Return: always 0
 */
int main(void)
{
	int i, a = 1, b = 2, c;

	for (i = 1; i <= 50; i++)
	{
		printf("%d, ", a);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
