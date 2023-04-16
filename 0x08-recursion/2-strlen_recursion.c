#include "main.h"
/**
 *_strlen_recursion -> prints the string length
 * @s: the address of the string
 */
int _strlen_recursion(char *s)
{
	int cnt = 0;

	if (*s != '\0')
	{
		cnt++;
		s++;
		return (cnt + _strlen_recursion(s));
	}
}
