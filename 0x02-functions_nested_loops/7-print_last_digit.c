#include "main.h"
/**
 * print_last_digit -> prints last digit
 * @n: a parameter
 * Return: Return the ast digit
 */
int print_last_digit(int n)
{
	int lasd;

	if (n < 0)
		n *= -1;
	lasd = n % 10;
	_putchar(lasd + '0');
	return (lasd);
}
