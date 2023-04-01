#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *add_strings(char *n1, char *n2, char *r, int r_ind);

/**
 * add_strings -> adds two numbers
 * @n1: a parameter
 * @n2: a parameter
 * @r: a parameter
 * @r_ind: a parameter
 * Return: returns r + r_ind or 0 or r + r_ind + 1
 */
char *add_strings(char *n1, char *n2, char *r, int r_ind)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_ind--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_ind) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--, r_ind--)
	{
		num = (*n1 - '0') + tens;
		*(r + _ind) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n2; n2--, r_ind--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_ind) = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens && r_ind >= 0)
	{
		*(r + r_ind) = (tens % 10) + '0';
		return (r + r_ind);
	}
	else if (tens && r_ind < 0)
		return (0);

	return (r + r_ind + 1);
}
/**
 * infinite_add -> adds two numbers
 * @n1: a parameter
 * @n2: a parameter
 * @r: a parameter
 * @size_r: a parameter
 * Return: returns 0 or add_strings(n1, n2, r, --size_r)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n1_len = 0, n2_len = 0;

	for (i = 0; *(n1 + i); i++)
		n1_len++;
	for (i = 0; *(n2 + i); i++)
		n2_len++;
	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
