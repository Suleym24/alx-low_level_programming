#include <stdio.h>
/**
 * main - prints alphabets
 * Return: return 0
 */
int main(void)
{
	char low, q, e;

	q = 'q';
	e = 'e';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != q && low != e)
	putchar(low);
	}
	putchar('\n');
	return (0);
}
