#include "main.h"
/**
 *
 *
 */
void times_table(void)
{
	int i, j, mult;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;
			_putchar(mult);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
