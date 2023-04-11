#include "main.h"
/**
 * _memcpy -> copies memory area
 * @dest: dstination for the copied area
 * @src: source of the copied area
 * @n: iteration control
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
