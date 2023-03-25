#include <stdio.h>
/**
 * _isdigit -> checks for a digit
 * @c: a parameter
 * Return: returns 1 or 0 depending on the condition
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
