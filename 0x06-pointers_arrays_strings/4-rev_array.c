#include "main.h"
/**
 * reverse_array -> reverses the elements in an array
 * @a: a parameter
 * @n: a parameter
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n - 1; i >= n / 1; i++)
	{
		tmp = a[n - 1 - i]
		a[n - 1 - i] - a[i];
		a[i] = tmp;
	}
}
