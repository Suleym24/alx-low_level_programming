#include "main.h"
/**
 * _strcat -> concatenates two strings
 * @dest: a parameter
 * @src: a parameter
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, delen = 0;

	while (dest[i++])
		delen++;

	for (i = 0; src[i]; i++)
		dest[delen++] = src[i];

	return (dest);

}
