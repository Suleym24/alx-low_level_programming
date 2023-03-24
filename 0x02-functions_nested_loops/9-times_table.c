#include "main.h"
/**
 * times_table -> prints 9 timestable
 * Return: void
 */
void times_table(void)
{
	int i, j = 0, m;

	for (i = 0; i <= 9; i++)
	{
		while (j <= 9)
		{
			m = i * j;
			_putchar(m);
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
	}
}
