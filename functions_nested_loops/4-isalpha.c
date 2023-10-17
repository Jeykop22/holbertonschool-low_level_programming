#include "main.h"

/**
 * _isalpha - make the sum of 1 number
 * @c: first operand
 *
 * Return: the sum of the two parameters
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
