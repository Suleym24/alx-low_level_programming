#include <stdio.h>
/**
 * main- prints alphabets
 * Return: Return 0
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
