#include "main.h"
/**
 * rev_string -> reverses a string
 * @s: a parameter
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j, temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
