#include <stdio.h>
/**
 * main - entry
 * Return: always 0
 */

int main(void)

{
	int d, p, s;

	for (d = '0'; d <= '9'; d++)
	{
	for (p = d + 1; p <= '9'; p++)
	{
	for (s = p + 1; s <= '9'; s++)
	{
	if ((d != '1' || p != '2' || s != '0') && (d != '1' || p != '0' || s != '2') && (d != '0' || p != '2' || s != '1') && (d != '2' || p != '0' || s != '1') && (d != '2' || p != '1' || s != '0'))
	{
	putchar(d);
	putchar(p);
	putchar(s);
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
