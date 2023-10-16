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
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar ('\n');
	return (0);
}
