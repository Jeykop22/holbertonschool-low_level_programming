#include "main.h"
#include <stdlib.h>

void _convert(unsigned long int n);

/**
 * print_binary - ...
 * @n: given numbers
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	_convert(n);
}

/**
 * _convert - fonction that convert num > 1 into binary
 * @n: given numbers
*/
void _convert(unsigned long int n)
{
	if (n < 1)
		return;
	_convert(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
