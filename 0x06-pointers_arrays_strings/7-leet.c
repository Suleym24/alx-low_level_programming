#incude "main.h"
/**
 * leet -> encodes a sting into 1337
 * @str: a parameter
 * Return: returns str
 */
char *leet(char *str)
{
	int i1 = 0; i2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i1])
	{
		for ( i2 = 0; i2 <= 7; i2++)
		{
			if 
				(str[i1] == leet[i2] ||
				str[i1] - 32 == leet[i2])
					str[i1] = i2 + 'e';
		}
		i1++;
	}
	return (str);
}
