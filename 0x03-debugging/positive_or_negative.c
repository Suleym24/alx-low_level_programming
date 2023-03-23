#include "main.h"
/**
 * positive_or_negative -> prints if a number is positive or negative
 * @i: a parameter
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
