#include "main.h"
/**
 *_strlen_recursion -> prints the string length
 * @s: the address of the string
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
