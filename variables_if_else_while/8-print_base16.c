#include <stdio.h>

/**
 * main - entry point
 *
 * Description: '"8-print_base16"'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char numhexa = '0';
	char letter = 'a';

	while (numhexa <= '9')
	{
		putchar(numhexa);
		numhexa++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
