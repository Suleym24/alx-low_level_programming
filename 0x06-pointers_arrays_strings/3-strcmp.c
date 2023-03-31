#include "main.h"
/**
 * _strcmp -> compare two strings
 * @s1: a parameter
 * @s2: a parameter
 * Return: returns the diffetence between the strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
