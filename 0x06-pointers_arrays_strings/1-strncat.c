#include "main.h"
/*
 * _strncat -> concatenates strings
 * @dest: a parameter
 * @src: a parameter
 * @n: a parameter
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
