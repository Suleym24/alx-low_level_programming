#include "main.h"
/**
 * puts_half -> prints half of a string
 * @str: a parameter
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0, j = 0, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = j + 1;
	}
	if (j % 2 != 0)
	{
		n = j - 1 / 2;
	}
	else
	{
		n = j / 2;
	}
	for (i = 0; i <= n; i++)
	{
		_putchar(str[i]);
	}
}
