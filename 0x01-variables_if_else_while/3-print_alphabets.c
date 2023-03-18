#include <stdio.h>
/**
 * main - prints alphabets
 * Return: Return 0
 */
int main(void)
{
	char low, upper;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
		putchar('\n');
	return (0);
}

