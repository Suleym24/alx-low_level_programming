#include "main.h"
/**
 * _strchr -> locates a character in a string
 * @s: a parameter
 * @c: a parameter
 * Return: returns a string or null depending on the condition
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (c == s[i])
			s += i;
		return (s);
	}
	return ('\0');
}
