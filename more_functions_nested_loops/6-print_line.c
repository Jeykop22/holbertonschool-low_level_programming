#include "main.h"

/**
 * print_line - print n lines
 * @n: first operand
 */

void print_line(int n)
{
	int i = 0;

	while (n > 0 && i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
