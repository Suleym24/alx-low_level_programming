#include <stdio.h>
/**
 * main -combination
 * Return: always 0
 */

int main(void)

{
	int comb;

	for (comb = '0'; comb <= '9'; comb++)
	{
		putchar(comb);
		if (comb != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
