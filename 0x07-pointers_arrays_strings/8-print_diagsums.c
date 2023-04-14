#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -> prints the sum of the two diagonals of a square matrix
 * @a: a parameter
 * @size: a parameter
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0, maxsum = 0;

	for (i = 0; a[i][size]; i++)
	{
		for (j = size; j >= 0; j--)
		{
			sum1 = a[i][i];
			sum2 = a[i][j];
			maxsum = maxsum + sum1 + sum2;
		}
	}
		printf("%d", maxsum);
		printf("\n");
}
