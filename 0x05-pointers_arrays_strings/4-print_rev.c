#include "main.h"
/**
 * print_rev -> prints string in reverse
 * @s: a parameter
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = count + 1;
	}
	for (i = count; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
