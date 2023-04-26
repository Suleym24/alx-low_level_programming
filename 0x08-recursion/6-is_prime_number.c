#include "main.h"
/**
 * is_prime_number - prints a prime number
 * @n: a parameter
 * Return: returns 1 or 0 depending on the condition
 */
int is_prime_number(int n)
{
	if ( n > 0)
		if (n % 2 == 0)
			cnt++;
	cnt = cnt + is_prime_numbr(n--);
	if (cnt == 2)
		return (1);
	else
		return (0);
}

