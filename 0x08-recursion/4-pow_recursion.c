#include "main.h"
/**
 * _pow_recursion - prints the power of an integer
 * @x: a parameter
 * @y: a parameter
 * Return: returns an integer depending on it condition
 */
int _pow_recursion(int x, int y)
{
	int res = 0;

	if (y < 0)
		res = -1;
	else if (y == 0)
		res = 1;
	else
		res = x * _pow_recursion(x, y - 1);
	return (res);
}
