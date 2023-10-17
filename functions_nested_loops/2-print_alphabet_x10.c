#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	char count_line = 0;

	while (letter < '{')
	{
		_putchar(letter);
		letter++;
		if (letter == '{')
		{
			count_line++;
			_putchar('\n');
			letter = 'a';
		}
		if (count_line == 10)
			break;
	}
}
