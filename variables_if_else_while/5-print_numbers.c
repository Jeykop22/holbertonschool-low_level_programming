#include <stdio.h>

/**
 * main - entry point
 *
 * Description: '" 2-print_alphabet in lower"'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar ('\n');
	return (0);
}
