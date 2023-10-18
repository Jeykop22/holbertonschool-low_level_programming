#include "main.h"

/**
 * times_table - print times 9 tables
 *
 * Return: ...
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			int multi = x * y;

			if (x >= 0 && y >= 1 && multi < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (multi >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');
			}
			else
				_putchar(multi + '0');
		}
		_putchar('\n');
	}
}
