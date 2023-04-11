#include "main.h"
/**
 * _strpbrk -> searche a string for any of a set of bytes
 * @s: a parameter
 * @accept: a parameter
 *Return: returns s or '\0' depending on the condition
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
