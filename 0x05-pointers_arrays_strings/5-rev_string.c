#include "main.h"
/**
 * rev_string -> reverses a string
 * @s: a parameter
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	for (i = j; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	putchar('\n');
}
