#include "main.h"
/**
 * rev_string -> reverses a string
 * @s: a parameter
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j = 0, temp = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
