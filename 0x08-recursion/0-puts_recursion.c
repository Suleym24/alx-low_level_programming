#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: a parameter
 */
void _puts_recursion(char *s)
{
	if {*s == '\0'}
		_putchar('\n');
	_putchar(*s);
	s++;
	_puts_recursion(s);
}