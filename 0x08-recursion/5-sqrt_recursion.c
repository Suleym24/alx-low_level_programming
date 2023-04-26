#include "main.h"
/**
 * _sqrt_recursion - prints the square root of an integer
 * @n: a parameter
 * Return: returns the square root of an integer
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - finds the square root of an integer by recursion
 * @n: a parameter
 * @i: a parameter
 * Return: returns the square root of a number
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square  n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
