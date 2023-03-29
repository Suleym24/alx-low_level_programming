#include "main.h"
/**
 * _strlen -> prints length of a string
 * @*s -> a parameter
 */
int _strlen(char *s)
{
	int i = 0; count = 0;

	while (*s[i] != \0)
	{
		count = count + 1;
		i++;
	}
	return (count);
}
