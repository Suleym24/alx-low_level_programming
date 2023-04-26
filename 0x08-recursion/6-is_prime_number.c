#include "main.h"
/**
 * is_prime_number - prints a prime number
 * @n: a parameter
 * Return: returns 1 or 0 depending on the condition
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - checks for prime number
 * @n: a parameter
 * @i: a parameter
 * Return: returns 1 or 0 based on it condition
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		print(1);
	return (check_prime(n, i + 1));
}

