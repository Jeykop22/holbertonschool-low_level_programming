#include "main.h"

/**
 * print_times_table - print n table
 * @n: number of the table
 *
 * Return: ...
 */
void print_times_table(int n)
{
	int x;
	int y;

	if (n <= 14 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				int multi = x * y;

				if (multi > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((multi / 100) + '0');
					_putchar(((multi / 10) % 10) + '0');
					_putchar((multi % 10) + '0');
				} else if (multi > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((multi / 10) + '0');
					_putchar((multi % 10) + '0');
				} else
				{
					if (y != 0)
					{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					}
					_putchar(multi + '0');
				}
			}
			_putchar('\n');
		}
	}
}
