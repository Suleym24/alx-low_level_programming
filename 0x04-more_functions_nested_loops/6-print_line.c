#include "main.h"
/**
 * print_line -> prints a straight line
 */
void print_line(int n)
{
	int n, i;
	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
}

