#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: first operand
 * Return: ...
 */
void print_triangle(int size)
{
	int i, j, a;

	if (size > 0)
	{
		if (size < 2)
		{
			_putchar('#');
			_putchar('\n');
		}
		else
		{
			for (j = 1; j <= size; j++)
			{
				for (i = 0; i < size - j; i++)
					_putchar(' ');
				for (a = 0; a < j; a++)
					_putchar('#');
				_putchar('\n');
			}
		}
	}
	else
		_putchar('\n');
}
