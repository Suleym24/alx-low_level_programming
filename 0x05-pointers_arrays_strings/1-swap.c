#include "main.h"
/**
 * swap_int -> swaps integers
 * @a: a parameter
 * @b: a parameter
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
