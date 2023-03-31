#include "main.h"
/**
 * _strncat -> concatenates two strings using an inputed number of byte
 * @dest: a parameter
 * @src: a parameter
 * @n: a parameter
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, delen = 0;

	while (dest[i++])
		delen++;

	for (i = 0; src[i] && i < n; i++)
		dest[delen++] = src[i];

	return (dest);
}
