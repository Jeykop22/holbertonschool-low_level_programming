#include "main.h"

/**
 * _strlen - print the lengh of string
 * @s: pointer
 * Return: ...
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
