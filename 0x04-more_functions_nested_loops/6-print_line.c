#include "main.h"
/**
 * print_line -> prints a straight line
 * @n: a parameter
 */
void print_line(int n)
{
	int i;
	char l = '_', z = '\n';

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar(z);
		}
		else
		{
			_putchar(l);
			_putchar(z);
		}
	}
}

