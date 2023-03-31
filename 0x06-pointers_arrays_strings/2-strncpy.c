#include "main.h"
/**
 * _strncpy -> copies a string
 * @dest: a parameter
 * @src: a parameter
 * @n: a parameter
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, srlen = 0;

	while (src[i++])
		srlen++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = srlen; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
