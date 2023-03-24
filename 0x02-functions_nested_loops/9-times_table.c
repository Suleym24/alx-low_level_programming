#include "main.h"
/**
 * times_table -> prints 9 timestable
 * Return: void
 */
void times_table(void)
{
	int i, j, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = i * j;
			_putchar(mult);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
