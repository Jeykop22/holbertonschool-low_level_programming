#include "main.h"

/**
 * _memset - print an array in the constant bytes
 * @s: array
 * @b: constant bytes
 * @n: size
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
