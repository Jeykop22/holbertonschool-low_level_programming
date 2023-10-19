#include "main.h"

/**
 * print_numbers - print_numbers between 0 - 9
 */
void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
