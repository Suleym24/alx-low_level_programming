#include "main.h"
/**
 * print_number -> prints an integer
 * @n: a parameter
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < n)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 100) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
