#include "main.h"
/**
 * _isupper -> checks for uppercase character
 * @c: a parameter
 * Return: returns i or 0 depending on the condition
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}

