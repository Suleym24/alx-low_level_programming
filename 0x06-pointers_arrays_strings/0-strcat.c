#include "main.h"
/**
 * _strcat -> concatenates two strings
 * @dest: a parameter
 * @src: a parameter
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	int i, cnt1 = 0, cnt2 = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		cnt1++;
	}
	for (i = 0; src[i] == '\0'; i++)
	{
		cnt2++;
	}
	for (i = 0; i <= cnt2; i++)
	{
		dest[cnt1 + 1] = src[i];
	}
	_putchar('\n');
	return (dest);
}
