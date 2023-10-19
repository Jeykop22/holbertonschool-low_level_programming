#include "main.h"

/**
 * print_diagonal - print n \ with i spaces and j lines
 * @n: first operand
 */
void print_diagonal(int n)
{
	int j = 0;
	int i = 0;

	if (n > 0)
	{
		if (n < 2)
		{
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
			while (i < n)
			{
				i++;
				if (i < 1)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					for (j = 0; j < i - 1; j++)
						_putchar(' ');
					_putchar('\\');
					_putchar('\n');
				}
			}
		}

	}
	else
		_putchar('\n');
}
