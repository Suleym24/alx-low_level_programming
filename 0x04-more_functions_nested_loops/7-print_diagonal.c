#include "main.h"
/**
 * print_diagonal -> prints a diagonal
 * @n: a parameter
 */
void print_diagonal(int n)
{
	int i, j, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= 1; k++)
			{
				_putchar('\\');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
