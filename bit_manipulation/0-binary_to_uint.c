#include "main.h"
#include <stdlib.h>

int _strlen(const char *s);

/**
 * binary_to_uint - convert binary to int
 * @b: string in binary
 *
 * Return: unsigned int sum, or 0 if it's NULL or diff than 0 & 1
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len = 0, sum = 0;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);
		if (b[len] == 49)
			sum += 1 << i;
		i++;
	}
	return (sum);
}

/**
 * _strlen - get the size of the string
 * @s: string
 *
 * Return: int
*/
int _strlen(const char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
