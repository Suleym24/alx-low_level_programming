#include "main.h"
/**
 * print_last_digit -> prints last digit
 * @n: a parameter
 * Return: Return the ast digit
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
		n = -n;
	i = n % 10;
	_putchar(i + '0');
	return (i);
}
