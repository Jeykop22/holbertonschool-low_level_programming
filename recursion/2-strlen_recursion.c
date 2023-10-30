#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: pointer of string
 * Return: 0 or next char of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
