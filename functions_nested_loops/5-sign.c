#include "main.h"

/**
 * print_sign - make the sum of 1 number
 * @n: first operand
 *
 * Return: the sum of the two parameters
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
	}
	return (0);
}
