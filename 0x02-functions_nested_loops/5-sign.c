#include "main.h"
/**
 * print_sign -> prints the signs of number
 * @n: a character
 * Return: return 1, 0 or -1 depending on the condition
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return ('-1');
	}
}
