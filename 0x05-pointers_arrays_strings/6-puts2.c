#include "main.h"
/**
 * puts2 -> jumps one character
 * @str: a parameter
 */
void puts2(char *str)
{
	int i, j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = j + 1;
	}
	i = 0;

	while (i <= j)
	{
		_putchar(str[i]);
		i = i + 2;
	}
}
