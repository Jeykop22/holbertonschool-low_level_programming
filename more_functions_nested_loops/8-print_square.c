#include "main.h"

/**
 * print_square - print # to print a square
 * @size: first operand
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		if (size < 2)
		{
			_putchar('#');
			_putchar('\n');
		}
		else
		{
			for (j = 0; j < size; j++)
			{
				for (i = 0; i < size; i++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}
	}
	else
		_putchar('\n');
}
