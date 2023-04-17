#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: a parameter
 * Return: returns -1, 1 or the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial (n - 1));
}
