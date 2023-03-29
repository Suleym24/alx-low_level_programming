#include "main.h"
/**
 * _strlen -> prints length of a string
 * @*s -> a parameter
 */
int _strlen(char *s)
{
	int i = 0, count = 0;

	while (*s != '\0')
	{
		count = count + 1;
	}
	return (count);
}
